#include<stdio.h>
const int maxn = 51;
typedef unsigned long long ULL;
ULL A[maxn];

void cal(int n){
    if(A[n]==0){
        cal(n-1);
    }
    
    if(n==0){
        A[0] = 1;
    }
    else if(n==1){
        A[1] = 1;
    }
    else{
        A[n] = n*A[n-1];
    }
}

int main(){
    A[0] = 1;
    A[1] = 1;
    int n;
    scanf("%d",&n);
    getchar();
    cal(n);
    ULL sum=0;
    for(int i=1;i<=n;i++){
        sum += A[i];
    }
    printf("%llu\n",sum);
    return 0;
}