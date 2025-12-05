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
	for (int i = 0; i < n; i++)
	{
		stack<int> stack;

		bool isVPS = true;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '(')
			{
				stack.push(1);
			}
			else
			{
				// 여는 괄호가 없는데 닫는 괄호가 나오는 경우
				if (stack.empty())
				{
					isVPS = false;
					break;
				}
				else
				{
					stack.pop();
				}
			}
		}
		//다 끝났는데도 괄호가 닫히지 않은게 있다면
		if (!stack.empty())
		{
			isVPS = false;
		}
		if (isVPS)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}