#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    int point = 0;
    if(n%2==0){
        point++;
    }
    if(n>4&&n<=12){
        point++;
    }
    if(point == 0){
        printf("0 0 0 1\n");
    }
    else if(point == 1){
        printf("0 1 1 0\n");
    }
    else{
        printf("1 1 0 0\n");
    }
    return 0;
}