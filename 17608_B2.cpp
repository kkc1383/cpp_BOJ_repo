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
		if (stack.empty())
		{
			stack.push(num);
		}
		else
		{
			while (!stack.empty())
			{
				if (stack.top() <= num)
					stack.pop();
				else
					break;
			}
			stack.push(num);
		}
	}
	cout << stack.size() << endl;
	return 0;
}