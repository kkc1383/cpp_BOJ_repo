#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//공유기를 놓을 수 있는 위치가 정해져 있기 때문에 해당 gap을 감당할 수 있는지 최적의 공유기를 설치할 집의 좌표를 선택지를 찾고 가능성 유무를 판단
bool isPossible(int gap, int house_count, int wifi_count, vector<int> house_list)
{
	int start = 0;
	for (int i = 0; i < wifi_count; i++)
	{
		int best = 0;
		int left = start + 1; // 첫 집은 맨 왼쪽 구석에 박혀있다고 가정했기 때문에
		int right = house_count - 1; 
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (house_list[start] + gap <= house_list[mid]) // 조건 만족할 경우
			{
				best = mid; // 후보군 등록 해놓기
				right = mid - 1; // 범위 재설정
			}
			else // 조건 만족 안할 경우
			{
				left = mid + 1;//범위 재설정
			}
		}
		if (best == 0)
			return false;
		start = best;
	}
	return true;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int houseCount, wifiCount;
	cin >> houseCount >> wifiCount;

	vector<int> houseList(houseCount);
	for (int i = 0; i < houseCount; i++)
	{
		cin >> houseList[i];
	}

	sort(houseList.begin(), houseList.end());

	int gap_left = 1;
	int gap_right = houseList[houseCount - 1] - houseList[0];
	int gap_best = 0;

	while (gap_left <= gap_right)
	{
		int gap_mid = (gap_left + gap_right) / 2;
		if (isPossible(gap_mid, houseCount, wifiCount - 1, houseList))
		{
			gap_best = gap_mid;
			gap_left = gap_mid + 1;
		}
		else
		{
			gap_right = gap_mid - 1;
		}
	}
	cout << gap_best << endl;


	return 0;
}