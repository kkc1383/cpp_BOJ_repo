#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	int b_100, b_10, b_1;
	b_100 = b / 100;
	b_10 = (b / 10) % 10;
	b_1 = b % 10;
	cout << a * b_1 << "\n";
	cout << a * b_10 << "\n";
	cout << a * b_100 << "\n";
	cout << a * b << "\n";

	return 0;
}