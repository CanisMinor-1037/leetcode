/**
 * @file P5743.cpp
 * @author seed 
 * @brief 猴子吃桃
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        ans = (ans + 1) * 2;
    }
    cout << ans << endl;
    return 0;
}