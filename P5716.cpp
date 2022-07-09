#include<stdio.h>
int daysInMonth1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int daysInMonth2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int year, month;
    scanf("%d %d",&year,&month);
    getchar();
    if((year%4==0&&year%100!=0)||(year%400==0)){
        printf("%d\n",daysInMonth1[month]);
    }
    else{
        printf("%d\n",daysInMonth2[month]);
    }
    return 0;
}