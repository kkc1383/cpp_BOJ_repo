#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	
	int left = 0;
	int right = n - 1;
	int best = vec[0]+vec[n-1];
	pair<int, int> best_list = { left,right };
	while (left < right) //같을 순 없으니까
	{
		int mixed = vec[left] + vec[right];

		if (abs(mixed) < abs(best))
		{
			best = mixed;
			best_list = { left,right };
		}
		if (mixed > 0)
		{
			right--;
		}
		else if (mixed < 0)
		{
			left++;
		}
		else // 두 합이 0인 경우 정답
		{
			best_list = { left,right };
			break;
		}
	}
	cout << vec[best_list.first] << " "<< vec[best_list.second] << endl;

	return 0;
}