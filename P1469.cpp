#include <iostream>
using namespace std;
int main() {
    int ans = 0;
    int n;
    int temp;
    cin >> n;
    ios::sync_with_stdio(false);
    for (int i = 0; i < n; i++) {
        cin >> temp;
        ans ^= temp;
    }
    cout << ans << endl;
    return 0;
}