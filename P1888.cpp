#include<stdio.h>
typedef long long LL;
LL gcd(LL a, LL b){
    if(a<b){
        LL temp = a;
        a = b;
        b = temp;
    }
    LL r;
    do{
        r = a%b;
        a = b;
        b = r;
    }while(r!=0);
    return a;
}

int main(){
    LL a,b,c;
    LL temp;
    scanf("%lld %lld %lld",&a,&b,&c);
    getchar();
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    LL g = gcd(c,a);
    a /= g;
    c /= g;
    printf("%lld/%lld\n",a,c);
    return 0;
}