#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int getCost(vector<vector<int>>& map, vector<int>& route)
{
	int cost = 0;
	for (size_t i = 0; i < route.size(); i++)
	{
		if (i == route.size() - 1)
		{
			cost += map[route[i]][route[0]]; // 다시 돌아오는 경우
			if (map[route[i]][route[0]] == 0) return -1;
		}
		else
		{
			cost += map[route[i]][route[i + 1]]; // 일반적으로 가는 경우
			if (map[route[i]][route[i + 1]] == 0) return -1;
		}
	}
	return cost;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> map(n,vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
	
	vector<int> route(n);

	for (int i = 0; i < n; i++)
	{
		route[i] = i;
	}

	int min = INT_MAX;
	do {
		int cost = getCost(map, route);
		if (cost == -1)
			continue;
		if (min > cost)
			min = cost;
	} while (next_permutation(route.begin(), route.end()));

	cout << min << endl;
	return 0;
}