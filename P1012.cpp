#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 21;
string a[maxn];
bool cmp(string& a, string& b){
    return a+b>b+a;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}