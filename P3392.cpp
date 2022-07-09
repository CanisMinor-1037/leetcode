#include <iostream>
#include <algorithm>
const int Maxn = 51;
const int Maxm = 51;
char flag[Maxn][Maxm];
int addAns[102];
using namespace std;
int main() {
    int n, m;
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> flag[i][j];
        }
    }
    int ans = 0;
    for (int j = 0; j < m; j++) {
        if (flag[0][j] != 'W') {
            ans++;
            flag[0][j] = 'W';
        }
        if (flag[n-1][j] != 'R') {
            ans++;
            flag[n-1][j] = 'R';
        }
    }

    int h = 2*n - 5;
    for (int k = 0; k < h; k++) {
        if (k == h / 2) {
            for (int i = 1; i <= n - 2; i++) {
                for (int j = 0; j < m; j++) {
                    if (flag[i][j] != 'B') {
                        addAns[k]++;
                    }
                }
            }
        } else if (k < h / 2) {
            for (int i = 1; i < n - 2 - k; i++) {
                for (int j = 0; j < m; j++) {
                    if (flag[i][j] != 'W') {
                        addAns[k]++;
                    }
                }
                //cout << 'W' << endl;
            }// 'W'
            for (int i = n - 2; i >= n - 2 - k; i--) {
                for (int j = 0; j < m; j++) {
                    if (flag[i][j] != 'B') {
                        addAns[k]++;
                    }
                }
                //cout << 'B' << endl;
            }// 'B'
        } else {
            for (int i = 1; i <= n - 2 - (k - h / 2); i++) {
                for (int j = 0; j < m; j++) {
                    if (flag[i][j] != 'B') {
                        addAns[k]++;
                    }
                }
                //cout << 'B' << endl;
            }// 'B'
            for (int i = n - 1 - (k - h / 2); i <= n - 2; i++) {
                for (int j = 0; j < m; j++) {
                    if (flag[i][j] != 'R') {
                        addAns[k]++;
                    }
                }
                //cout << 'R' << endl;
            }// 'R'
        }
    }
    int min_addAns = 0xfffff;
    for (int k = 0; k < h; k++) {
        if (min_addAns > addAns[k]) {
            min_addAns = addAns[k];
        }
    }
    cout << (ans + min_addAns) << endl;
    return 0;
}