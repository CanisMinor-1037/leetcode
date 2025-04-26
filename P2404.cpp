/**
 * @file P2404.cpp
 * @author seed 
 * @brief 
 * @version 0.1
 * @date 2022-09-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <algorithm>
using namespace std;

int a[10001] = {1};
int n;

void print(int t) {
    for (int i = 1; i < t; i++) {
        cout << a[i] << "+";
    }
    cout << a[t] << endl;
}

void search(int s, int t) {
    for (int i = a[t - 1]; i <= s; i++) {
        if (i < n) { 
            a[t] = i; 
            s -= i; 
            if (s == 0) { 
                print(t);
            } else {
                search(s, t + 1); 
            }
            s += i; 
        }
    }
}

int main() {
    cin >> n;
    search(n, 1);
    return 0;
}