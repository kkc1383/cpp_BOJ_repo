#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	//테스트 케이스
	for (int i = 0; i < n; i++)
	{
		int count;
		cin >> count;

		vector<int> scoreVec;
		int sum = 0;
		for (int j = 0; j < count; j++)
		{
			int num;
			cin >> num;
			sum += num;
			scoreVec.push_back(num);
		}

		double avg = (double)sum / count;

		int overCount = 0;
		for (int j = 0; j < count; j++)
		{
			// 평균을 넘었다면
			if (scoreVec[j] > avg)
			{
				overCount++; // 카운트 증가
			}
		}
		
		double percent = (double)overCount / count * 100;
		cout << fixed << setprecision(3) << percent << "%" << endl;
	}
	return 0;
}