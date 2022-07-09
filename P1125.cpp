#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPrime(int x){
    if(x<2){
        return false;
    }
    else if(x==2){
        return true;
    }
    else{
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    string word;
    cin >> word;
    int maxn = -1;
    int minn = 0xfffff;
    //map<char, int> m;
    int c;
    for(unsigned long long int i=0;i!=word.length();i++){
        c = count(word.begin(),word.end(),word[i]);
        if(c>maxn){
            maxn = c;
        }
        if(c<minn){
            minn = c;
        }
    }
    maxn = maxn-minn;
    if(isPrime(maxn)){
        cout << "Lucky Word"<< endl;
        cout << maxn << endl;
    }   
    else{
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}