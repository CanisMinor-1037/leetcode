#include<iostream>
#include<string>
using namespace std;
const int maxn = 1002;
int f[maxn];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i/2;j++){
            f[i] += f[j];
        }
        f[i]++;
    }
    cout << f[n] << endl;
    return 0;
}