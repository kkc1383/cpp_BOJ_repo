#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	queue<int> queue;
	for (int i = 1; i <= n; i++)
	{
		queue.push(i);
	}

	while (queue.size() > 1)
	{
		// 가장 앞에 있는 것을 버린다.
		queue.pop();

		//그 다음 앞에 있는 것을 뒤로 옮긴다.
		int temp = queue.front();
		queue.pop();
		queue.push(temp);
	}
	cout << queue.front() << '\n';
	return 0;
}