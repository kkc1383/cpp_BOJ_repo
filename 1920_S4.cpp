#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> vec1;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec1.push_back(num);
	}
	sort(vec1.begin(), vec1.end()); // 이분 탐색을 위해서 정렬

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int num;
		cin >> num;
		cout << binary_search(vec1.begin(), vec1.end(), num) << '\n'; // algorithm 헤더에서 제공되는 binary_search 사용
	}

	return 0;
}