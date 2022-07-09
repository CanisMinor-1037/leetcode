#include <iostream>
#include <cstdlib>
using namespace std;
char src_buffer[1000];
char dst_buffer[1000];
char f(int);
int main() {

    int src_base;
    cin >> src_base >> src_buffer;
    char * endptr = NULL;
    long hex_value = strtol(src_buffer, &endptr, src_base);
    int dst_base;
    cin >> dst_base;
    //ltoa(hex_value, buffer, dst_base);
    int len = 0;
    int temp;
    while (hex_value) {
        temp = hex_value % dst_base;
        dst_buffer[len++] = f(temp);
        hex_value /= dst_base;
    }
    //cout << dst_buffer << endl;
    for (int i = len - 1; i >= 0; i--) {
        cout << dst_buffer[i];
    }
    cout << endl;
    return 0;
}

char f(int x) {
    if (x >= 0 && x <= 9) {
        return x + '0';
    } else if (x >= 10 && x <= 16) {
        return 'A' + x - 10;
    }
    return '\0';
}