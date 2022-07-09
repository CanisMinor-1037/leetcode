#include <iostream>
#include <algorithm>
using namespace std;
const int Maxn = 100002;
uint32_t a[Maxn];
int main() {
    int n;
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}