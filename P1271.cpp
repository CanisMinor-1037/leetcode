#include <iostream>
#include <algorithm>
using namespace std;
const int Maxn = 1000;
uint64_t tickets[Maxn];
int main() {
    int n;
    uint64_t m;
    cin >> n >> m;
    int temp;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        tickets[temp]++;
    }
    for (int i = 1; i <= n; i++) {
        if (tickets[i] == 0) {
            continue;
        } else {
            for (int j = 0; j < tickets[i]; j++) {
                cout << i << " ";
            }
        }
    }
    cout << endl;
    return 0;
}