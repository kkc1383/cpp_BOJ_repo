#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> map(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
	int t = 0;
	int max = 0;
	while (true)
	{
		vector<vector<bool>> visited(n, vector<bool>(n, false));
		queue<pair<int,int>> q;
		//안전영역 갯수 세기
		int safeCount = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (visited[i][j]) continue; // 방문했다면 건너뛰기
				if (map[i][j] <= t) continue; // 잠겼다면 건너뛰기
				visited[i][j] = true;
				safeCount++;

				//인접 그리드들 전부 방문 처리하기
				q.push({ i,j });
				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();

					//4방향 탐색
					for (int k = 0; k < 4; k++)
					{
						int nx = x + dx[k];
						int ny = y + dy[k];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 벽이면 건너뛰기
						if (visited[nx][ny]) continue; // 이미 방문했으면 건너뛰기
						if (map[nx][ny] <= t) continue; //잠겼으면 건너뛰기

						visited[nx][ny]=true; // 다음 일감 방문처리하기
						q.push({ nx,ny }); // 다음 일감 집어넣기

					}
				}
			}
		}
		if (max < safeCount) max = safeCount; //최댓값 갱신
		if (safeCount == 0) break;
		t++;
	}
	cout << max << endl;
	return 0;
}