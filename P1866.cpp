#include <iostream>
#include <algorithm>
using namespace std;
const int64_t Mod = 1000000007;
const int MaxN = 52;
int Maxnumber[MaxN];
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> Maxnumber[i];
    }
    sort(Maxnumber, Maxnumber + N);
    int64_t ans = Maxnumber[0];
    for (int i = 1; i < N; i++) {
        ans *= (Maxnumber[i] - i);
        ans %= Mod;
    }
    cout << ans << endl;
    return 0;
}