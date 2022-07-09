#include <iostream>
#include <cmath>
#include <map>
using namespace std;
const int64_t MaxN = 2e5 + 2;
int64_t number[MaxN];

int main() {
    map<int64_t, int64_t> m;
    int64_t N, C;
    int64_t count = 0;
    cin >> N >> C;
    for (int i = 0; i < N; i++) {
        cin >> number[i];
        m[number[i]]++;
        number[i] -= C;
    }
    for (int i = 0; i < N; i++) {
        count += m[number[i]];
    }
    cout << count << endl;
    return 0;
    /*
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (abs(number[i] - number[j]) == C) {
                count++;
            }
        }
    }*/
    cout << count << endl;
    return 0;
}