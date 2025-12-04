#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long getHeight(vector<int>& woods, int h)
{
	long long sum = 0;
	for (int i : woods)
	{
		if (i > h)
			sum += i - h;
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int woodCount;
	long long target;
	cin >> woodCount >> target;
	vector<int> woods(woodCount);

	for (int i = 0; i < woodCount; i++)
	{
		cin >> woods[i];
	}

	int low = 0;
	int high = *max_element(woods.begin(), woods.end());
	int result = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		long long sum = getHeight(woods, mid);  // 한 번만 호출!

		if (sum >= target)  // 목표 이상이면 더 높이 잘라봄
		{
			result = mid;  // 가능한 답 저장
			low = mid + 1;
		}
		else  // 부족하면 더 낮게 잘라야 함
		{
			high = mid - 1;
		}
	}

	cout << result << '\n';
	return 0;
}