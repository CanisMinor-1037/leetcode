#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int translate(string& s){
    if(s.compare("one")==0){
        return 1;
    } else if (s.compare("two")==0) {
        return 2;
    } else if (s.compare("three")==0) {
        return 3;
    } else if (s.compare("four")==0) {
        return 4;
    } else if (s.compare("five")==0) {
        return 5;
    } else if (s.compare("six")==0) {
        return 6;
    } else if (s.compare("seven")==0) {
        return 7;
    } else if (s.compare("eight")==0) {
        return 8;
    } else if (s.compare("nine")==0) {
        return 9;
    } else if (s.compare("ten")==0) {
        return 10;
    } else if (s.compare("eleven")==0) {
        return 11;
    } else if (s.compare("twelve")==0) {
        return 12;
    } else if (s.compare("thirteen")==0) {
        return 13;
    } else if (s.compare("fourteen")==0) {
        return 14;
    } else if (s.compare("fifteen")==0) {
        return 15;
    } else if (s.compare("sixteen")==0) {
        return 16;
    } else if (s.compare("seventeen")==0) {
        return 17;
    } else if (s.compare("eighteen")==0) {
        return 18;
    } else if (s.compare("nineteen")==0) {
        return 19;
    } else if (s.compare("twenty")==0) {
        return 20;
    } 
    return 0;
}

string s[6];

bool cmp(string& a, string& b){
    return a+b > b+a;
}

int main(){
    string input;
    int num;
    string numStr = "";
    for(int i=0;i<6;i++){
        cin >> input;
        num = translate(input);
        num = (num*num)%100;
        s[i] = to_string(num);
       // cout << s[i] << endl;
    }
    sort(s,s+6,cmp);
    for(int i=0;i<6;i++){
        if(s[i].compare("0")!=0){
            cout << s[i];
        }
    }

}