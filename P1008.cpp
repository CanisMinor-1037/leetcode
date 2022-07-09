#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int number[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int A, B, C;
    do {
        A = number[0] * 100 + number[1] * 10 + number[2];
        B = number[3] * 100 + number[4] * 10 + number[5];
        C = number[6] * 100 + number[7] * 10 + number[8];
        //cout << A << " " << B << " " << C << endl;
        if ((B == 2 * A) && (C == 3 * A)) {
            cout << A << " " << B << " " << C << endl;
        }
    } while (next_permutation(number, number + 9));
    return 0;
}