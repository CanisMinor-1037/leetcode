#include <iostream>
using namespace std;
int main() {
    // 1092k
    // 364x
    //cout << (7 * 52) << endl;
    // 364x + 1092k = n
    int n;
    cin >> n;
    int k = 0;
    int x = 0;
    while (1) {
        k++;
        n -= 1092;
        if (n % 364 == 0) {
            x = n / 364;
            if (x >= 1 && x <= 100) {
                break;
            }
        }
    }
    cout << x << endl;
    cout << k << endl;
    
   //cout << (108 * 364 + 1092) << endl;
    return 0;
}