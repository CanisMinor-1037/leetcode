#include<iostream>
using namespace std;
const int maxn = 9;
int M[maxn][maxn];
int main(){
    int n;
    cin >> n;
    int max = n*n;
    M[0][0] = 1;
    int i,j;
    i = j = 0;
    char d = 'r';
    for(int k=2;k<=max;k++){
        if(d=='r'){
            if((j==n-1)||(j!=n-1&&M[i][j+1]!=0)){
                d = 'd';
                M[++i][j]=k;
            }
            else{
                M[i][++j]=k;
            }
        }
        else if(d=='d'){
            if((i==n-1)||(i!=n-1&&M[i+1][j]!=0)){
                d = 'l';
                M[i][--j]=k;
            }
            else{
                M[++i][j]=k;
            }
        }
        else if(d=='l'){
            if((j==0)||(j!=0&&M[i][j-1]!=0)){
                d = 'u';
                M[--i][j]=k;
            }
            else{
                M[i][--j]=k;
            }
        }
        else{
            if((i==0)||(i!=0&&M[i-1][j]!=0)){
                d = 'r';
                M[i][++j]=k;
            }
            else{
                M[--i][j]=k;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d",M[i][j]);
        }
        cout << '\n';
    }
    
    return 0;
}