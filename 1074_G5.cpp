#include <iostream>
using namespace std;

int func(int x, int y, int n)
{
	int number = 0;
	if (n == 1) // 2*2 일 경우
	{
		if (x == 0 && y == 0) return 0; // 왼쪽 위
		else if (x == 1 && y == 0) return 1; // 오른쪽 위
		else if (x == 0 && y == 1) return 2; // 왼쪽 아래
		else return 3; // 오른쪽 아래
	}
	else
	{
		if (x >= 0 && x < (1 << (n - 1)) && y >= 0 && y < (1 << (n - 1))) { // 왼쪽 위의 경우 그냥 축소만 함
			number += 0;
			number += func(x, y, n - 1);
		}
		else if (x >= (1 << (n - 1)) && x < (1 << n) && y >= 0 && y < (1 << (n - 1))) { // 오른쪽 위의 경우 x에 2^n-1을 빼줌
			number += (1 << (2 * n - 2));
			number += func(x - (1 << (n - 1)), y, n - 1);
		}
		else if (x >= 0 && x < (1 << (n - 1)) && y >= (1 << (n - 1)) && y < (1 << n)) {// 왼쪽 아래의 경우 y에 2^n-1을 빼줌
			number += (1 << (2 * n - 2)) * 2;
			number += func(x, y - (1 << (n - 1)), n - 1);
		}
		else {
			number += (1 << (2 * n - 2)) * 3;
			number += func(x - (1 << (n - 1)), y - (1 << (n - 1)), n - 1);
		}
	}
	return number;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, r, c;
	cin >>N >> r >> c;

	cout << func(c, r, N);
	return 0;
}