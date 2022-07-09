#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    //cout << isdigit('-') << endl;
    int p1, p2, p3;
    string input;
    cin >> p1 >> p2 >> p3;
    cin >> input;
    char prev, cur, next;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != '-') {
            cout << input[i];
        } else {
            cur = input[i];
            prev = input[i - 1];
            next = input[i + 1];
            if (next <= prev || (isdigit(next) ^ isalpha(prev) == 0) || (isdigit(prev) ^ isalpha(next) == 0)) {
                cout << cur;
            } else {
                if (p3 == 1) {
                    for (char t = prev + 1; t < next; t++) {
                        for (int j = 0; j < p2; j++) {
                            if (isdigit(t)) {
                                cout << t;
                            } else {
                                if (p1 == 1) {
                                    cout << char(tolower(t));
                                } else if (p1 == 2) {
                                    cout << char(toupper(t));
                                } else {
                                    cout << "*";
                                }
                            }
                        }
                    }
                } else {
                    for (char t = next - 1; t > prev; t--) {
                        for (int j = 0; j < p2; j++) {
                            if (isdigit(t)) {
                                cout << t;
                            } else {
                                if (p1 == 1) {
                                    cout << char(tolower(t));
                                } else if (p1 == 2) {
                                    cout << char(toupper(t));
                                } else {
                                    cout << "*";
                                }
                            }
                        }
                    }
                }
            }
        }
    } 

}