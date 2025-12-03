#include <iostream>
#include <vector>
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

	int n;
	cin >> n;

	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	int primeCount = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(vec[i]))
			primeCount++;
	}
	cout << primeCount << endl;

	return 0;
}