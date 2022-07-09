#include <iostream>
using namespace std;
int main() {
    int cost[12];
    for (int i = 0; i < 12; i++) {
        cin >> cost[i];
    }
    int curMoney = 0;
    int curMonth = 0;
    int savedMoney = 0;
    int temp = 0;
    int temp1 = 0;
    // 383 - 180 = 203
    // 203 / 100 = 2
    // 383 - 200 = 183
    for (curMonth = 0; curMonth < 12; curMonth++) {
        curMoney += 300;
        temp = curMoney - cost[curMonth];
        if (temp < 0) {
            cout << (-curMonth - 1) << endl;
            return 0;
        }
        temp1 = temp / 100;
        savedMoney += temp1;
        curMoney -= (temp1 * 100);
        curMoney -= cost[curMonth];
    }
    curMoney += (savedMoney * 120);
    cout << curMoney << endl;
    return 0;
}