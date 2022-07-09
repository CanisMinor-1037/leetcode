#include <iostream>
#include <algorithm>
const int Maxn = 102;
int coeff[Maxn];
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        cin >> coeff[i];
    }
    int maxExp = n;
    for(int i = 0; i <= n; i++) {
        if (n - i == maxExp) {
            if (coeff[i] > 0 && coeff[i] != 1) {
                cout << coeff[i];
            } else if (coeff[i] < 0 && coeff[i] != -1) {
                cout << coeff[i];
            } else if (coeff[i] == 0) {
                maxExp --;
                continue;
            } else if (coeff[i] == -1) {
                cout << "-";
            }
        } else if (n - i == 0) {
            if (coeff[i] > 0) {
                cout << "+" << coeff[i];
            } else if (coeff[i] < 0) {
                cout << coeff[i];
            }
        } else {
            if (coeff[i] > 0 && coeff[i] != 1) {
                cout << "+" << coeff[i];
            } else if (coeff[i] < 0 && coeff[i] != -1) {
                cout << coeff[i];
            } else if (coeff[i] == 0) {
                continue;
            } else if (coeff[i] == 1){
                cout << "+";
            } else {
                cout << "-";
            }
        }

        if(n - i == 1) {
            cout << "x";
        } else if (i == n) {
        } else {
            cout << "x^" << (n - i);
        }
    }
    if(maxExp == 0) {
        cout << "0";
    }
    return 0;
}