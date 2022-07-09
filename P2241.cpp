#include<iostream>
using namespace std;
const int maxn = 5003;
const int maxm = 5003;
int main(){
    int n, m;
    uint64_t ans0, ans1;
    ans0 = ans1 = 0;
    cin >> n >> m;
    ans0 = n*(n+1) * m*(m+1)/4;
    uint64_t s = n>m?m:n;
    for(uint64_t i=0;i<=s;i++){
        ans1 += (n-i)*(m-i); 
    }
    ans0 -= ans1;
    cout << ans1 << " " << ans0 << endl;
    return 0;
}