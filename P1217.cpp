#include<stdio.h>
typedef unsigned long long ULL;
bool isPalindromicNumber(ULL x){
    ULL y = x;
    ULL number = 0;
    while(y!=0){
        number = number*10 + y%10;
        y /= 10;
    }
    if(number == x){
        return 1;
    }
    else{
        return 0;
    }
}

bool digits(ULL x){
    if((x>=1000&&x<=9999)||(x>=100000&&x<=999999)||(x>=10000000&&x<=99999999)){
        return 0;
    }
    else{
        return 1;
    }
}

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
    ULL a, b;
    scanf("%llu %llu",&a,&b);
    getchar();

    int start = (a%2==0)?(a+1):a;
    for(int i=start;i<=b;i+=2){
        if(isPalindromicNumber(i)&&digits(i)&&isPrime(i)){
            printf("%llu\n",i);
        }
    }
    return 0;
}