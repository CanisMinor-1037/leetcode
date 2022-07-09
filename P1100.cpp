#include <iostream>
using namespace std;
int main() {
    uint32_t a, b;
    cin >> a;
    b = a;
    a <<= 16;
    b >>= 16;
    a = a | b;
    cout << a << endl;
    return 0;
}