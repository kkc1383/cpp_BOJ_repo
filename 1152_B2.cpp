#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	getline(cin, s);
	
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			count++;
		}
	}
	if (s[0] == ' ') count--;
	if (s[s.length() - 1] == ' ')count--;

	cout << count+1 << endl;

	return 0;
}