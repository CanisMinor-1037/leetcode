#include <iostream>
using namespace std;
int main() {
    uint64_t n, ans;
    cin >> n;
    ans = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    cout << ans << endl;
    return 0;
}