/**
 * @file P2404_1.cpp
 * @author seed 
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;
/**
 * 
 * 1. 输入1个数n
 * 2. 对这个数，进行1->(s/2)的拆分
 * 3. 将拆分出的数放到数组a中，记录，当前a中存了多少个数
 * 4. 更新s
 * 5. 直到完成一次拆分
 * 
 */
int a[1000];

void dfs(int s, int step) {
    if (s == 0) {
        for (int i = 0; i < step - 1; i++) {
            cout << a[i] << "+";
        }
        cout << a[step - 1] << endl;
    }
    for (int i = 1; i <= s; i++) {
        if (i < a[step - 1]) {
            continue;
        }
        a[step] = i;
        dfs(s - i, step + 1);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++) {
        a[0] = i;
        dfs(n - i, 1);
    }
}