#include<algorithm>
#include<iostream>
using namespace std;
const int maxr = 1002;
int N[maxr][maxr];
int ans[maxr][maxr];
int main(){
    int r;
    cin >> r;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            cin >> N[i][j];
        }
    }
    ans[0][0] = N[0][0];
    for(int i=1;i<r;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                ans[i][j] = N[i][j] + ans[i-1][j];
            } else if(j==i){
                ans[i][j] = N[i][j] + ans[i-1][j-1];
            } else {
                ans[i][j] = N[i][j] + max(ans[i-1][j-1],ans[i-1][j]);
            }
        }
    }
    int Ans = -1;
    for(int i=0;i<r;i++){
        if(ans[r-1][i] > Ans){
            Ans = ans[r-1][i];
        }
    }
    cout << Ans << endl;
    return 0;
}