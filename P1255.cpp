#include<iostream>
using namespace std;
int len = 1;
int ans[5002][5002];
void cal(int x){
    for(int i=0;i<len;i++){
        ans[x][i] = ans[x-1][i] + ans[x-2][i];
    }
    for(int i=0;i<len;i++){
        if(ans[x][i]>=10){
            ans[x][i+1] += ans[x][i]/10;
            ans[x][i]%=10;
            if(ans[x][len]){
                len++;
            } 
        }
    }
}

int main(){
    int n;
    cin >> n;
    ans[1][0] = 1;
    ans[2][0] = 2;
    for(int i=3;i<=n;i++){
        cal(i);
    }
    for(int i=len-1;i>=0;i--){
        cout << ans[n][i];
    }
    cout << endl;
    return 0;
}