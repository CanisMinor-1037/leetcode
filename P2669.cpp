#include<stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    getchar();

    int coin = 0;
    int days = 0;
    int day = 0;
    while(days<k){
        day++;
        days += day;
        coin += day*day;
    }
    coin -= day*day;
    days -= day;
    coin += (k-days)*day;
    printf("%d\n",coin);
    return 0;
}