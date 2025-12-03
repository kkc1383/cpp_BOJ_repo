#include <iostream>
#include <string>
using namespace std;

void hanoi(int n, int x, int y)
{
	if (n == 1) {
		cout << x << ' ' << y << '\n';  // ✅ 문자 리터럴 사용
		return;
	}

	hanoi(n - 1, x, 6 - x - y);
	cout << x << ' ' << y << '\n';
	hanoi(n - 1, 6 - x - y, y);
}

string power2MinusOne(int n)
{
	string result = "1";

	for (int i = 0; i < n; i++)
	{
		int carry = 0;

		for (int j = result.length() - 1; j >= 0; j--)
		{
			int temp = (result[j] - '0') * 2 + carry;
			result[j] = (temp % 10) + '0';
			carry = temp / 10;
		}

		if (carry > 0)
			result = char(carry + '0') + result;
	}

	int idx = result.length() - 1;
	while (idx >= 0 && result[idx] == '0')
	{
		result[idx] = '9';
		idx--;
	}
	if (idx >= 0)
		result[idx]--;

	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << power2MinusOne(n) << '\n';  // ✅ 문자 리터럴

	if (n <= 20)
		hanoi(n, 1, 3);

	return 0;
}                                                                 


#include <iostream>
using namespace std;

string power2MinusOne(int n)
{
	string result;
	result = "1";

	for (int i = 0; i < n; i++)
	{
		int carry = 0;

		for (int j = result.length() - 1; j >= 0; j--)
		{
			int temp = (result[j] - '0') * 2 + carry;
			result[j] = (temp % 10) + '0';
			carry = temp / 10;
		}

		if (carry > 0)
			result = char(carry + '0') + result;
	}

	// -1
	int idx = result.length() - 1;
	while (idx >= 0 && result[idx] == '0')
	{
		result[idx] = '9';
		idx--;
	}
	if (idx >= 0)
		result[idx]--;

	return result;
}

void Hanoi(int n, int start, int goal, int sub)
{
	if (n == 0) return;
	//n-1개를 start에서 sub로 옮김
	Hanoi(n - 1, start, sub, goal);
	//맨 밑 바닥을 start에서 goal로 옮김
	cout << start << " " << goal << '\n';
	//n-1개를 sub에서 goal로 옮김
	Hanoi(n - 1, sub, goal, start);
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << power2MinusOne(n) << endl;
	if (n <= 20)
		Hanoi(n, 1, 3, 2);

	return 0;
}