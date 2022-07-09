#include <iostream>
#include <algorithm>
using namespace std;
const int Maxn = 5002;
struct Apple {
    int height_x;
    int cost_s;
    bool access;
} apples[Maxn];
bool cmp(Apple & a, Apple & b);
int main() {
    ios::sync_with_stdio(false);
    int n, s;
    cin >> n >> s;
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++) {
        cin >> apples[i].height_x;
        cin >> apples[i].cost_s;
        if (apples[i].height_x <= b + a) {
            apples[i].access = true;
        } else {
            apples[i].access = false;
        }
    }
    sort(apples, apples + n, cmp);
    int ans = 0;
    int cost_s = 0;
    for (int i = 0; i < n; i++) {
        cost_s += apples[i].cost_s;
        if (cost_s > s) {
            break;
        } else {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;

}

bool cmp(Apple & a, Apple & b) {
    if (a.access == true && b.access == true) {
        return a.cost_s < b.cost_s;
    } else if (a.access == true) {
        return true;
    } else if (b.access == true) {
        return false;
    } else {
        return false;
    }
}