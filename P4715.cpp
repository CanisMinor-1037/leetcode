/**
 * @file P4715.cpp
 * @author seed 
 * @brief 淘汰赛
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstdio>
using namespace std;
const int MaxN = 8;
const int MaxM = (1 << 7) + 1;
struct Node {
    int id;
    int score;
}nodes[MaxN][MaxM];


/**
 * 0
 * 0       1
 * 0   1   2   3
 * 0 1 2 3 4 5 6 7
 */

int main() {
    int n;
    cin >> n;
    int m = (1 << n);
    
    /* 用nodes存储信息 */
    for (int i = 0; i < m; i++) {
        nodes[n][i].id = i + 1;
        cin >> nodes[n][i].score;
    }

    for (int i = 0; i < n; i++) {
        /* 从第(n - i)层 构建 第(n - i - 1)层 */
        for (int j = 0; j < (1 << (n - i - 1)); j++) {
            if (nodes[n - i][j * 2].score > nodes[n - i][j * 2 + 1].score) {
                nodes[n - i - 1][j].id = nodes[n - i][j * 2].id;
                nodes[n - i - 1][j].score = nodes[n - i][j * 2].score;
            } else {
                nodes[n - i - 1][j].id = nodes[n - i][j * 2 + 1].id;
                nodes[n - i - 1][j].score = nodes[n - i][j * 2 + 1].score;
            }
        }
    }

    cout << ((nodes[1][0].score > nodes[1][1].score) ? nodes[1][1].id : nodes[1][0].id) << endl;
    return 0;
}