/**
 * @file P1996.cpp
 * @author CanisMinor
 * @brief 约瑟夫问题
 * @version 0.1
 * @date 2022-07-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <cstdio>
#include <iostream>
using namespace std;
const int Maxn = 101;
bool visited[Maxn]; /* 是否已出圈 */
int main() {
    int n, m; /* n个人，数到m的出圈 */
    cin >> n >> m;
    int count = 0; /* 报数 */
    int out = 0; /* 已出圈人数 */
    int ptr = 1; /* 要报数的人的编号 */
    while (out < n) { /* 全部出圈，则结束循环 */
        count %= m;
        count += 1; /* 下一个人要报的数 */
        while (visited[ptr] == true) { /* 已出圈， 不能报数 */
            ptr %= n;
            ptr++; 
        }
        /* 当前visited[ptr] = false, 可以报数 */
        //printf("[%d] [%d]\n", ptr, count);

        if (count == m) { /* 报的数是m */
            out++; /* 出圈 */
            cout << ptr << " "; /* 出圈人的编号 */
            visited[ptr] = true; /* 标记为已出圈 */
        }
        ptr %= n;
        ptr++;
    }
    cout << endl;
    return 0;
}