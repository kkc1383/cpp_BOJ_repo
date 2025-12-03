#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int maxNum=0, maxIndex=0;

	for (int i = 1; i <= 9; i++)
	{
		int num;
		cin >> num;
		if (num > maxNum)
		{
			maxNum = num;
			maxIndex = i;
		}
	}
	cout << maxNum << endl << maxIndex << endl;

	return 0;
}