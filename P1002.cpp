#include<iostream>
using namespace std;
const int maxn = 22;
const int maxm = 22;
uint64_t ans[maxn][maxm];
bool vis[maxn][maxm];
int mov[9][2]{
    {-2,-1},{-2,1},{-1,-2},{-1,2},
    {1,-2},{1,2},{2,-1},{2,1},{0,0}
};
int main(){
    int n,m,hx,hy;
    int nx, ny;
    cin >> n >> m >> hx >> hy;
    
    for(int i=0;i<9;i++){
        nx = hx + mov[i][0];
        ny = hy + mov[i][1];
        if(nx>=0&&nx<=n&&ny>=0&&ny<=m){
            vis[nx][ny] = true;
            ans[nx][ny] = 0;
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(vis[i][j]==false){
                if(i==0&&j==0){
                    ans[i][j] = 1;
                } else if(i>0&&j==0) {
                    ans[i][j] = ans[i-1][j];
                } else if(j>0&&i==0) {
                    ans[i][j] = ans[i][j-1]; 
                } else {
                    ans[i][j] = ans[i-1][j] + ans[i][j-1];
                }
            }
        }
    }
    cout << ans[n][m] << endl;
    return 0;
}