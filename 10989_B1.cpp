#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> vec(10001);
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec[num]++;
	}

	for (int i=1;i<10001;i++)
	{
		if (vec[i] == 0) continue;
		
		for (int j = 0; j < vec[i]; j++)
		{
			cout << i << '\n';
		}
	}
	return 0;
}

// 그냥 하면 메모리 초과 나니까 카운팅 sort 사용