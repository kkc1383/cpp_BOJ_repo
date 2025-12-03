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
	cout.tie(NULL);  // ✅ 추가

	int n;
	cin >> n;

	cout << power2MinusOne(n) << '\n';  // ✅ 문자 리터럴

	if (n <= 20)
		hanoi(n, 1, 3);

	return 0;
}