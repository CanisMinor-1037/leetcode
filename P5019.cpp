#include <iostream>
#include <algorithm>
const int Maxn = 1e5 + 2;
int d[Maxn];
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }
    int ans = 0;
    int L, R;
    int status;
    while (1) {
        status = 0;
        for (int i = 1; i <= n; i++) {
            if (d[i] > 0) {
                L = i;
                status = 1;
                break;
            }
        }

        if (status == 0) {
            break;
        } else {
            for (int i = L; i <= n; i++) {
                if (d[i] > 0) {
                    d[i] --;
                    if (i == n) {
                        ans ++;
                    }
                } else {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}