#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findTwo(vector<int>& heights, int over)
{
	for (int i = 0; i < heights.size(); i++)
	{
		for (int j = i + 1; j < heights.size(); j++)
		{
			if (heights[i] + heights[j] == over)
			{
				heights.erase(heights.begin() + j);
				heights.erase(heights.begin() + i);
				return;
			}
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> heights;
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		int num;
		cin >> num;
		sum += num;
		heights.push_back(num);
	}
	int over = sum-100;

	findTwo(heights, over);

	sort(heights.begin(), heights.end());

	for (int i : heights)
	{
		cout << i << endl;
	}



	return 0;
}