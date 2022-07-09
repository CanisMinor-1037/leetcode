#include<stdio.h>
int main(){
    unsigned long long a;
    scanf("%llu",&a);
    getchar();
    int day;
    for(day=1;a!=1;day++){
        a /= 2;
    }
    printf("%d\n",day);
    return 0;
}