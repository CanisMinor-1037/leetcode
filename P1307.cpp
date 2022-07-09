#include<stdio.h>
typedef long long LL;
int main(){
    LL a;
    scanf("%lld",&a);
    getchar();

    LL number = 0;
    LL signal = (a>0)?1:-1;
    a = (a>0)?a:-a;
    while(a!=0){
        number = number*10 + a%10;
        a/=10;
    }
    number *= signal;
    printf("%lld\n", number);
    return 0;
}