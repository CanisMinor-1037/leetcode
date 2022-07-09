#include <iostream>
#include <algorithm>
using namespace std;
const int Maxn = 203;
int r[Maxn][Maxn];
int ans[Maxn];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            cin >> r[i][j];
            //r[j][i] = r[i][j];
        }
    }
    /*
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }*/
    for (int i = 1; i <= n; i++) {
        ans[i] = r[1][i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j<= i; j++) {
            ans[i] = min(ans[i], ans[j] + r[j][i]);
        }
    }
    cout << ans[n] << endl;
    return 0;
}