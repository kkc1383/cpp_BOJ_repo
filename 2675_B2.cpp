#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int t = 0; t < testCase; t++)
	{
		int num;
		cin >> num;

		string s;
		cin >> s;

		string newString="";

		for (int i = 0; i < s.length(); i++)
		{
			newString.append(num, s[i]);//반복횟수를 정할 수 있음
		}
		cout << newString << endl;
	}
	return 0;
}