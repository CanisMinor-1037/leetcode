#include <iostream>
using namespace std;
char nbuffer[1000];
char cbuffer[1000];
int len;
char f(int);
int main() {
    int n, R;
    cin >> n >> R;
    int s = n;
    while (n) {
        nbuffer[len++] = n % R;
        n /= R; 
    }

    for (int i = 0; i < len; i++) {
        if (nbuffer[i] < 0) {
            nbuffer[i + 1]++;
            nbuffer[i] -= R;
        }
        if (nbuffer[i] >= -R) {
            nbuffer[i] += R;
            nbuffer[i + 1]--; 
        }
    }
    if (nbuffer[len] != 0) {
        len++;
    }
    int j;
    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        cbuffer[j] = f(nbuffer[i]); 
    }
    cout << s << "=" << cbuffer 
         << "(base" << R << ")" << endl;
    return 0;
}

char f(int x) {
    if(x >= 0 && x <= 9) {
        return x + '0';
    } else if (x >= 10 && x <= 20) {
        return x - 10 + 'A';
    } else {
        return '\0';
    }
}