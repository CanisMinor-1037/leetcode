#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    int time1 = 5*n;
    int time2 = 3*n+11;
    if(time1<time2){
        printf("Local\n");
    }
    else{
        printf("Luogu\n");
    }
    return 0;
}