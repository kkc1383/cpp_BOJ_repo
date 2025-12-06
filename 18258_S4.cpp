#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> queue;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int num;
			cin >> num;
			queue.push(num);
		}
		else if (s == "pop")
		{
			if (queue.empty())
				cout << -1 << '\n';
			else
			{
				int front = queue.front();
				queue.pop();
				cout << front << '\n';
			}
		}
		else if (s == "front")
		{
			if (queue.empty())
				cout << -1 << '\n';
			else
				cout << queue.front() << '\n';
		}
		else if (s == "back")
		{
			if (queue.empty())
				cout << -1 << '\n';
			else
				cout << queue.back() << '\n';
		}
		else if (s == "size")
		{
			cout << queue.size() << '\n';
		}
		else if (s == "empty")
		{
			cout << queue.empty() << '\n';
		}
	}

	return 0;
}