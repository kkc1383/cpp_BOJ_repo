#include <iostream>
#include <vector>
using namespace std;

int NQueen(int cur, int N, vector<int> row, vector<int> dig1, vector<int> dig2)
{
	if (cur == N) //종료 조건
		return 1;
	
	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (row[i] == 0 && dig1[cur + i] == 0 && dig2[cur - i + N - 1]==0)
		{
			//놓은 퀸 위치에 플래그들 작성
			row[i] = 1;
			dig1[cur + i] = 1;
			dig2[cur - i + N - 1] = 1;

			// 다음 행 퀸을 놓기 위해 재귀
			count += NQueen(cur + 1, N, row, dig1, dig2);

			// 다른 열에 퀸을 놓는 경우의 수도 계산 하기 위해 플래그 롤백
			row[i] = 0;
			dig1[cur + i] = 0;
			dig2[cur - i + N - 1] = 0;
		}
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> row(N), dig1(2*N-1),dig2(2*N-1);
	
	cout << NQueen(0, N, row, dig1, dig2);

	return 0;
}