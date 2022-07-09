#include<iostream>
using namespace std;
const int maxn = 20;
int ans[maxn][maxn];
int set[maxn][maxn];
void init(int n){
    for(int i=0;i<=n;i++){
        set[i][0] = true;
        ans[i][0] = 1;
    }
}
/*
int cal(int i, int j){
    if(set[i][j]){
        return ans[i][j];
    } else {
        if(i>0){
            return ans[i][j] = cal(i-1,j)+cal(i+1,j-1);
        } else if(i==0){
            return ans[0][j] = cal(1,j-1);
        }
    }
}*/
int main(){
    int n;
    cin >> n;
    //init(n);
    for(int j=0;j<=n;j++){
        for(int i=0;i<=n;i++){
            if(j==0){
                ans[i][0] = 1;
            } else if(i==0) {
                ans[0][j] = ans[1][j-1];
            } else {
                ans[i][j] = ans[i-1][j] + ans[i+1][j-1];
            }
        }
    }
    //cout << cal(0,n) << endl;
    cout << ans[0][n] << endl;
    return 0;
}