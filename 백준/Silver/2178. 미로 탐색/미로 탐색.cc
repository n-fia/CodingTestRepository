#include <iostream>
#include <queue>

using namespace std;

int board[102][102];
int visScore[102][102];

int n, m;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int answer = 0;

int main() {

	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		string number="";
		cin >> number;
		for (int j = 0; j < m; ++j) {
			board[i][j] = number[j]-48;
		}
	}

	queue<pair<int, int>> Q;
	Q.push({0, 0});
	visScore[0][0] = 1;

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		for (int dir = 0; dir < 4; ++dir) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];

			if (nx<0 || nx>=n || ny<0 || ny>=m) continue;
			if (nx == 0 && ny == 0) continue;
			int curScore = visScore[cur.first][cur.second] + 1;
			if (board[nx][ny] != 1) continue;
			if (visScore[nx][ny]==0 || visScore[nx][ny] > curScore) {
				Q.push({ nx,ny });
				visScore[nx][ny] = curScore;
			}
		}
		Q.pop();
	}

	cout << visScore[n-1][m-1];
}