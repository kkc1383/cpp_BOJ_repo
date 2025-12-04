#include <iostream>
#include <vector>
using namespace std;

int white_cnt = 0, blue_cnt = 0;

bool isFill(vector<vector<int>>& map, int x, int y, int size) {
    int first = map[y][x];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (map[y + i][x + j] != first)
                return false;
        }
    }
    return true;
}

void cutmap(vector<vector<int>>& map, int x, int y, int size) {
    if (isFill(map, x, y, size)) {
        if (map[y][x] == 0)
            white_cnt++;
        else
            blue_cnt++;
        return;
    }

    int half = size / 2;
    cutmap(map, x, y, half);             // 왼쪽 위
    cutmap(map, x + half, y, half);      // 오른쪽 위
    cutmap(map, x, y + half, half);      // 왼쪽 아래
    cutmap(map, x + half, y + half, half); // 오른쪽 아래
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> map(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    cutmap(map, 0, 0, n);

    cout << white_cnt << endl;
    cout << blue_cnt << endl;

    return 0;
}