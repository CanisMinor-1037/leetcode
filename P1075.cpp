#include<stdio.h>
typedef unsigned long long ULL;
bool isPrime(ULL x){
    if(x==2){
        return 1;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    ULL n;
    ULL i;
    scanf("%llu",&n);
    if(n%2==0){
        printf("%llu\n",n/2);
    }
    else{
        for(i=3;!(isPrime(i)&&n%i==0);i+=2);
        printf("%llu\n",n/i);
    }
    return 0;
}