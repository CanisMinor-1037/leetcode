#include<stdio.h>
int main(){
    int s, v;
    int cost;
    scanf("%d %d",&s,&v);
    getchar();

    if(s%v==0){
        cost = 10+s/v;
    }
    else{
        cost = 11+s/v;
    }
    int ddl = 8*60;
    int start = ddl - cost;
    if(start < 0){
        start += 24*60;
    }
    printf("%02d:%02d\n",start/60,start%60);
    return 0;
}