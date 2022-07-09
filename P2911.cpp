#include<iostream>
using namespace std;
const int maxn = 81;
int a[maxn];
int main(){
    int s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    for(int i1=1;i1<=s1;i1++){
        for(int i2=1;i2<=s2;i2++){
            for(int i3=1;i3<=s3;i3++){
                a[i1+i2+i3]++;
            }
        }
    }
    int ans;
    int max = -1;
    for(int i=1;i<=s1+s2+s3;i++){
        if(max<a[i]){
            max = a[i];
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}