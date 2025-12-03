#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return n;
	else
	{
		return n * factorial(n - 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	cout << factorial(num) << endl;
	return 0;
}