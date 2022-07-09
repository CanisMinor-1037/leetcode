#include<stdio.h>
typedef unsigned long long ULL;
const int maxn = 101;
ULL a[maxn];
int main(){
    int i=0;
    while(1){
        scanf("%llu",&a[++i]);
        if(a[i]==0){
            break;
        }
    }
    for(int j=i-1;j>1;j--){
        printf("%llu ",a[j]);
    }
    printf("%llu\n",a[1]);
    return 0;
}