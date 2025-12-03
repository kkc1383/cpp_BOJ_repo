#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getScore(vector<int> v)
{
	int sum = 0;
	for (int i = 0; i < v.size()-1; i++)
	{
		sum += abs(v[i] - v[i + 1]);
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> vec;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());

	int max = 0;
	do
	{
		int score = getScore(vec);
		if (score > max) max = score;
	} while (next_permutation(vec.begin(), vec.end()));

	cout << max << endl;
	return 0;
}