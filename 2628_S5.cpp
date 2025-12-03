#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> verVec, horVec;

	int width, height;
	cin >> width >> height;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;
		if (num1 == 0)
		{
			verVec.push_back(num2);
		}
		else
		{
			horVec.push_back(num2);
		}
	}
	sort(verVec.begin(), verVec.end());
	sort(horVec.begin(), horVec.end());

	vector<int> restVer, restHor;
	int finalVer=0, finalHor=0;

	for (int i : verVec)
	{
		restVer.push_back(i - finalVer);
		finalVer = i;
	}
	restVer.push_back(height - finalVer);
	for (int i : horVec)
	{
		restHor.push_back(i - finalHor);
		finalHor = i;
	}
	restHor.push_back(width - finalHor);

	int maxVer = *max_element(restVer.begin(), restVer.end());
	int maxHor = *max_element(restHor.begin(), restHor.end());
	
	cout << maxVer * maxHor << endl;
	return 0;
}