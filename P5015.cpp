#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int space=count(s.begin(),s.end(),' ');
    int cr=count(s.begin(),s.end(),'\n');
    cout << s.length()-cr-space;
    return 0;
}