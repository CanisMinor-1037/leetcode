#include<stdio.h>
typedef long long LL;
int main(){
    int x;
    LL n;
    scanf("%d %lld",&x,&n);
    getchar();

    LL i;
    LL rest = 0;
    for(i=x;i<=x+n-1;i++){
        if(i%7==0||i%7==6){
            rest++;
        }
    }
    n -= rest;
    LL k = n*250;
    printf("%lld\n",k);
    return 0;
}
