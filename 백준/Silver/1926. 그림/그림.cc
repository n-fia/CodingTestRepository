#include <iostream>
#include <queue>

using namespace std;

int board[502][502];

int n, m;
int vis[502][502];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int answer = 0;
int curExt = 0;

queue<pair<int, int>> Q;

void bfs(int x,int y) {
    ++answer;
    vis[x][y] = 1;
    Q.push({ x,y });
    int newExt = 1;
    while (!Q.empty()) {
        pair<int, int> cur = Q.front();
        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || nx >= n || ny<0 || ny>m) continue;
            if (vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            Q.push({ nx,ny });
            ++newExt;
        }
        Q.pop();
    }
    if (curExt < newExt) {
        curExt = newExt;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (board[i][j] == 1 && vis[i][j] != 1) bfs(i, j);
        }
    }
    cout << answer << endl;
    cout<< curExt;
}