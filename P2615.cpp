#include<stdio.h>
const int maxN = 39;
int M[maxN][maxN];
int pos[2];
void find(int x, int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(M[i][j]==x){
                pos[0] = i;
                pos[1] = j;
                return;
            }
        }
    }
}

void print(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int N;
    scanf("%d",&N);
    getchar();

    M[0][N/2] = 1;
    int maxK = N*N;
    for(int K=2;K<=maxK;K++){
        find(K-1, N);
        if(pos[0]==0&&pos[1]!=N-1){
            M[N-1][pos[1]+1] = K;
        }
        else if(pos[1]==N-1&&pos[0]!=0){
            M[pos[0]-1][0] = K;
        }
        else if(pos[0]==0&&pos[1]==N-1){
            M[1][N-1] = K;
        }
        else if(M[pos[0]-1][pos[1]+1]==0){
            M[pos[0]-1][pos[1]+1] = K;
        }
        else{
            M[pos[0]==N-1?0:pos[0]+1][pos[1]] = K;
        }
    }
    print(N);   
}