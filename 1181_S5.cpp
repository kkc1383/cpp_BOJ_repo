#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() != b.length())
	{
		return a.length() < b.length(); //길이 짧은 순
	}
	return a < b; //길이가 같으면 사전 순
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<string> vec;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		vec.push_back(s);
	}
	sort(vec.begin(), vec.end(), compare); // 정렬

	vec.erase(unique(vec.begin(), vec.end()), vec.end()); // 중복 제거

	for (string word : vec)
	{
		cout << word << "\n";
	}

	return 0;
}