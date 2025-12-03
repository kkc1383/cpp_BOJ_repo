#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int year;

	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}