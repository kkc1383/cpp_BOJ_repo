#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	//테스트 케이스 갯수
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		int score = 0;
		int combo = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')
			{
				combo ++; //맞춘 문제의 콤보 올려주고
				score += combo; // 콤보만큼 점수를 올려준다.
			}
			else
			{
				combo = 0;
			}
		}
		cout << score << endl;
	}

	return 0;
}