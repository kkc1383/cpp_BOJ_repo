#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	int a_100, a_10, a_1, b_100, b_10, b_1;
	a_100 = a / 100;
	a %= 100;
	a_10 = a / 10;
	a %= 10;
	a_1 = a;

	b_100 = b / 100;
	b %= 100;
	b_10 = b / 10;
	b %= 10;
	b_1 = b;

	int new_a, new_b;
	new_a = a_1 * 100 + a_10 * 10 + a_100;
	new_b = b_1 * 100 + b_10 * 10 + b_100;

	cout << max(new_a, new_b);
	return 0;
}