#include <iostream>
#include <algorithm>
const int Maxn = 1002;
struct T{
    int num;
    int time;
}t[Maxn];
using namespace std;
bool cmp(T& a, T& b) {
    return a.time >= b.time;
}

int main() {
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i].time;
        t[i].num = i + 1;
    }
    sort(t, t+n, cmp);
    double ans = 0;
    for (int i = 0; i < n; i++) {
        cout << t[n - 1 - i].num << " ";
        ans += i * t[i].time;
    }
    ans /= n;
    printf("\n%.2lf\n",ans);
    return 0;
}