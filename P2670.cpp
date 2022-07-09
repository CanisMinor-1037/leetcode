#include<cstdio>
const int maxn = 102;
const int maxm = 102;
char f[maxn][maxm];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    getchar();

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m+1;j++){
            f[i][j]=getchar();
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(f[i][j]=='?'){
                f[i][j] = '0';
                if(f[i-1][j-1]=='*'){
                    f[i][j]++;
                }
                if(f[i-1][j]=='*'){
                    f[i][j]++;
                }
                if(f[i-1][j+1]=='*'){
                    f[i][j]++;
                }
                if(f[i][j-1]=='*'){
                    f[i][j]++;
                }
                if(f[i][j+1]=='*'){
                    f[i][j]++;
                }
                if(f[i+1][j-1]=='*'){
                    f[i][j]++;
                }
                if(f[i+1][j]=='*'){
                    f[i][j]++;
                }
                if(f[i+1][j+1]=='*'){
                    f[i][j]++;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            putchar(f[i][j]);
        }
        printf("\n");
    }
}