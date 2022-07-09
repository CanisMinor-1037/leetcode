#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1000002;
int a[maxn]; 
int n, m, q;

int main(){
    //int n, m, q;
    cin >> n >> m;
    int ans;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=m;i++){
        cin >> q;
        ans = lower_bound(a+1,a+n+1,q)-a;
        if(q!=a[ans]){
            cout << "-1 ";
        } else {
            cout << ans << " ";
        }
    }
    cout << endl;
    return 0;
}