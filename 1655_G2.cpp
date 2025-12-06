#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int> min_pq;
	priority_queue<int> max_pq;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		//case가 3가지가 있다.
		//case 1 max_pq의 top보다 작은 경우 -> max_pq로 보냄
		//case 2 min_pq의 top보다 큰 경우 -> min_pq로 보냄
		//case 3 max_pq의 top과 min_pq의 top 사이 값임 ->max_pq로 보냄
		//그 이후 사이즈 조절

		if (!min_pq.empty() && -min_pq.top() < num)
		{
			min_pq.push(-num);
		}
		else
		{
			max_pq.push(num);
		}

		if (max_pq.size() > min_pq.size() + 1)
		{
			int max = max_pq.top();
			max_pq.pop();
			min_pq.push(-max);
		}
		else if (min_pq.size() > max_pq.size())
		{
			int min = -min_pq.top();
			min_pq.pop();
			max_pq.push(min);
		}

		cout << max_pq.top() << '\n';
	}
	return 0;
}