#include <iostream>
using namespace std;

int isHan(int n)
{
	if (n < 100)
		return 1;
	else if (n == 1000)
		return 0;
	else
	{
		//세자리 수 일 경우만 가정
		int n_100, n_10, n_1;
		n_100 = n / 100;
		n %= 100;
		n_10 = n / 10;
		n %= 10;
		n_1 = n;

		if ((n_100 + n_1) == n_10 * 2)
			return 1;
		else
			return 0;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	int count = 0;

	for (int i = 1; i <= num; i++)
	{
		count += isHan(i);
	}
	cout << count << endl;
	return 0;
}