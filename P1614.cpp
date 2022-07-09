#include<iostream>
using namespace std;
const int maxn = 3001;
int A[maxn];
int main(){
    int n,m;
    cin >> n;
    cin >> m;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    m--;
    int sum;
    int ans = 0xfffffff;
    for(int i=0;i+m<n;i++){
        sum = 0;
        for(int j=0;j<=m;j++){
            sum += A[i+j];
        }
        if(sum<ans){
            ans = sum;
        }
    }
    cout << ans << endl;
    return 0;
}