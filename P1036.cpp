#include<iostream>
#include<iomanip>
const int maxn = 22;
int n, k;
int ans;
int temp;
int N[maxn];
int ranks[maxn];
using namespace std;
bool isPrime(int x){
    if(x<=1){
        return false;
    } else if(x == 2) {
        return true;
    } else {
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        //cout << x << endl;
        return true;
    }
}

void dfs(int done){
    if(done == k){
        temp = 0;
        for(int i=1;i<=k;i++){
            temp += N[ranks[i]];
        }
        //cout << temp << endl;
        if(isPrime(temp)){
            ans++;
        }
    } else {
        for(int i=ranks[done]+1;i<=n;i++){
            ranks[done+1] = i;
            dfs(done+1);
        }
    }
}

int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> N[i];
    }
    dfs(0);
    cout << ans << endl;
    return 0;
}