#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int board[1002][1002];
int days[1002][1002];

int n, m;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };

int main() {
	queue<pair<int, int>> Q;

	cin >> m >> n;

	for (int i = 0; i < n; ++i) {
		fill(days[i], days[i] + m, -1);
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> board[i][j];
			if (board[i][j] == 1) {
				Q.push({ i,j });
				days[i][j] = 0;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();

		for (int dir = 0; dir < 4; ++dir) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx<0 || nx > n || ny<0 || ny>m) continue;
			if (board[nx][ny] != 0) continue;
			int day = days[cur.first][cur.second] + 1;
			if (days[nx][ny] != -1 && days[nx][ny] <= day) continue;
			Q.push({ nx,ny });
			days[nx][ny] = day;
		}
		Q.pop();
	}

	int answer = -1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (days[i][j] == -1) {
				if (board[i][j] != -1){
					cout << -1;
					return 0;
				}
			}

			if (days[i][j] > answer) {
				answer = days[i][j];
			}
		}
	}
	cout << answer;
}