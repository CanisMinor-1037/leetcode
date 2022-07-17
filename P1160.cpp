/**
 * @file P1160.cpp
 * @author seed 
 * @brief 队列安排
 * @version 0.1
 * @date 2022-07-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int MaxN = 1e5 + 2;
struct Student {
    int left;
    int right;
    int removed; /* 是否被移除 */
}student[MaxN];

int main() {
    int N; /* 班上有N个同学 */
    cin >> N;
    int k; /* k号 */
    int lk, rk; /* k的左右 */
    int p; /* 0:左, 1: 右 */
    int M; /* 去掉同学的数目 */
    int x; /* x号 */

    /* 将1号同学安排进队列 */

    /* 2-N号同学依次入列 */
    for (int i = 2; i <= N; i++) {
        cin >> k >> p;
        if (p == 0) {   /* ... k -> ... i k */
            if (student[k].left == 0) { /* k -> i k */
                student[k].left = i;
                student[i].right = k;
            } else { /* lk k -> lk i k */
                lk = student[k].left;
                student[lk].right = i;
                student[i].left = lk;
                student[i].right = k;
                student[k].left = i;
            }
        } else if (p == 1) { /* k ... -> k i ... */ 
            if (student[k].right == 0) { /* k -> k i */
                student[k].right = i;
                student[i].left = k;
            } else { /* k rk ... -> k i rk */
                rk = student[k].right;
                student[k].right = i;
                student[i].left = k;
                student[i].right = rk;
                student[rk].left = i;
            }
        }
    }

    /* 从左向右排队 */
    /* 队列最左边 */
    int no = 1;
    int lno;
    while (lno = student[no].left) {
        no = lno;
    }
   // cout << no << endl;
    cin >> M;
    /* 从队列中去掉 M 个同学 */
    for (int i = 0; i < M; i++) {
        cin >> x;
        student[x].removed = 1;
    }

    /* 排队 */
    int rno;
    while (rno = student[no].right) {
        if (student[no].removed == 0) { /* 未移除 */
            cout << no << " ";
        }
        no = rno;
    }
    if (student[no].removed == 0) { /* 未移除 */
        cout << no << endl;
    }
    return 0;
}