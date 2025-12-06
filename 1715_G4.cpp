#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int> pq;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		pq.push(-num);
	}

	int sum = 0;
	while (pq.size() > 1)
	{
		int num1, num2;

		num1 = -pq.top();
		pq.pop();
		num2 = -pq.top();
		pq.pop();

		sum += (num1 + num2);
		pq.push(-(num1 + num2));
	}
	cout << sum << endl;

	return 0;
}