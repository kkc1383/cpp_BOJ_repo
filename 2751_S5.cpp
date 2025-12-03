#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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

	for (int i : vec)
	{
		cout << i << '\n';
	}
	return 0;
}