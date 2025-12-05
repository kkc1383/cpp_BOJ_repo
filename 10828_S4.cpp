#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> stack;

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
			stack.push(num);
		}
		else if (s == "pop")
		{
			if (stack.empty())
				cout << -1 << endl;
			else
			{
				int top = stack.top();
				stack.pop();
				cout << top << endl;
			}
		}
		else if (s == "top")
		{
			if (stack.empty())
				cout << -1 << endl;
			else
				cout << stack.top() << endl;
		}
		else if (s == "size")
		{
			cout << stack.size() << endl;
		}
		else if (s == "empty")
		{
			cout << stack.empty() << endl;
		}
	}

	return 0;
}