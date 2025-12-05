#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	stack<int> stack;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num == 0)
		{
			stack.pop();
		}
		else
		{
			stack.push(num);
		}
	}

	int sum = 0;
	while (!stack.empty())
	{
		sum += stack.top();
		stack.pop();
	}
	cout << sum << endl;

	return 0;
}