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

	stack<pair<int, int>> hi_stack;
	for (int i = 0; i < n; i++)
	{
		int height;
		cin >> height;

		int answer = 0;
		pair<int, int> input_pair={ height,i };
		if (!hi_stack.empty())
		{
			// 지금 탑보다 작은 높이라면 stack에서 날리기
			while (!hi_stack.empty())
			{
				if (hi_stack.top().first < height)
					hi_stack.pop();
				else
					break;
			}
			// 수신한 탑이 있다면 그 탑의 인덱스를 answer에 추가
			if (!hi_stack.empty())
				answer = hi_stack.top().second+1;
		}
		hi_stack.push(input_pair);
		//index가 0부터 시작하므로
		cout << answer << " ";
	}
	return 0;
}