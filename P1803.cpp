#include <iostream>
#include <algorithm>
struct Game{
    int64_t start;
    int64_t end;
};
const int Maxn = 1e6 + 2;
Game games[Maxn];
using namespace std;
bool cmp(Game & a, Game & b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> games[i].start >> games[i].end;
    }
    sort(games, games + n, cmp);
    int64_t currentEnd = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            currentEnd = games[0].end;
            ans++;
        } else {
            if (games[i].start >= currentEnd) {
                currentEnd = games[i].end;
                ans++;
            }
        }
    }
    cout << ans << endl;
    cout << "你好\n";
    return 0;
}