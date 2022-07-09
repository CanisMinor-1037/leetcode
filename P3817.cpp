#include <iostream>
#include <algorithm>
const int Maxn = 1e5 + 2;
int64_t a[Maxn];
using namespace std;
int main() {
    int n;
    int64_t x;
    int64_t ans = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (a[1] > x) {
        ans += a[1] - x;
        a[1] = x;
    }    
    for (int i = 2; i <= n; i++) {
        if (a[i] + a[i - 1] > x) {
            ans += a[i] + a[i - 1] - x;
            a[i] = x - a[i - 1];
        }
    }
    cout << ans << endl;
    return 0;
}