#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int up, down, target;
	cin >> up >> down >> target;

	//target-up 이상을 up-down * day 만큼 올라와야 한다.
	int day = (target - up + up - down - 1) / (up - down) + 1; // 날짜가 내림되기 때문에 올림을 위해 up-down-1 더함, 1일 더 움직여야 나올 수 있으므로 2 더함

	cout << day << endl;

	return 0;
}