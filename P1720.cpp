#include<stdio.h>
typedef unsigned long long ULL;
const int maxn = 149;
ULL f[maxn];
ULL cal(int i){
    if(i==0){
        return 0;
    }
    if(f[i]==0){
        f[i] = cal(i-1)+cal(i-2);
    }
    return f[i];
}

int main(){
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    int n;
    scanf("%d",&n);
    getchar();

    printf("%llu.00\n",cal(n));
    return 0;
}