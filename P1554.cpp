#include<stdio.h>
typedef unsigned long long ULL;
ULL A[1001];

int main(){
    ULL M, N;
    scanf("%llu %llu",&M,&N);
    getchar();
    ULL temp;
    for(ULL i=M;i<=N;i++){
        temp = i;
        while(temp!=0){
            A[temp%10]++;
            temp /= 10;
        }
    }
    for(int i=0;i<9;i++){
        printf("%llu ",A[i]);
    }
    printf("%llu\n",A[9]);
    return 0;    
}