#include <iostream>
#include <algorithm>
using namespace std;
const int Maxn = 5000002;
uint32_t a[Maxn];
int main() {
    int n, k;
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        //scanf("%ld",&a[i]);
        cin >> a[i];
    }
    nth_element(a, a + k, a + n);
    cout << a[k] << endl;
    return 0;
}