#include <iostream>
#include <cstring>
using names`ace std;
int main() {
    int base;
    char buf[1024];
    cin >> base >> buf;
    int len = strlen(buf) - 1;
    int index;
    for (int index = 0; buf[index] == '0'; index++);
    if (index <= len) {
        cout << buf[index] << "*" << base << "^" << (len - index);
    }

    for (index++;index <= len; index++) {
        if (buf[index] != '0') {
            cout << "+" << buf[index] << "*" << base << "^" << (len - index);
        }
    }

    return 0;
}