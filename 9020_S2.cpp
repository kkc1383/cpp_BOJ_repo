#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int i = 0; i < testCase; i++)
	{
		int num;
		cin >> num;

		for (int j = num / 2; j > 0; j--)
		{
			if (isPrime(j) && isPrime(num - j))
			{
				cout << j << " " << num - j << endl;
				break;
			}

		}
	}

	return 0;
}