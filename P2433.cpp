#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2)
    {
        cout << (2 + 4) << " " << (10 - 2 - 4) << endl;
    }
    else if (T == 3)
    {
        cout << (14 / 4) << endl;
        cout << (14 - 14 % 4) << endl;
        cout << (14 % 4) << endl;
    }
    else if (T == 4)
    {
        cout << "166.666" << endl;
    }
    else if (T == 5)
    {
        cout << (480 / 32) << endl;
    }
    else if (T == 6)
    {
        cout << sqrt(6 * 6 + 9 * 9);
    }
    else if (T == 7)
    {
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0 << endl;
    }
    else if (T == 8)
    {
        const double PI = 3.141593;
        cout << (10 * PI) << endl;
        cout << (25 * PI) << endl;
        cout << (4 / 3.0 * PI * 125) << endl;
    }
    else if (T == 9)
    {
        cout << 22 << endl;
    }
    else if (T == 10)
    {
        cout << 9 << endl;
    }
    else if (T == 11)
    {
        cout << (100 / 3.0) << endl;
    }
    else if (T == 12)
    {
        cout << ('M' - 'A' + 1) << endl;
        cout << char('A' + 17) << endl;
    }
    else if (T == 13)
    {
        const double PI = 3.141593;
        double total_V = 4 / 3.0 * PI * (1000 + 64);
        int n = 1;
        cout << int(pow(total_V, 1 / 3.0)) << endl;
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }
    return 0;
}