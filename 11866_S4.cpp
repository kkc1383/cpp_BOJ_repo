#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	queue<int> queue;

	vector<int> answer;
	for (int i = 1; i <= n; i++)
	{
		queue.push(i);
	}
	int count = 0;
	while (!queue.empty())
	{
		count++;
		if (count < k)
		{
			int temp = queue.front();
			queue.pop();
			queue.push(temp);
		}
		else
		{
			answer.push_back(queue.front());
			queue.pop();
			count = 0;
		}
	}
	cout << "<";
	for (int i = 0; i < answer.size(); i++)
	{
		if (i < answer.size() - 1)
			cout << answer[i] << ", ";
		else
			cout << answer[i];
	}
	cout << ">" << endl;
	return 0;
}