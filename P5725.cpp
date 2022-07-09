#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            printf("%02d",i*n+j);
        }
        printf("\n");
    }
    printf("\n");

    int m = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n){
                printf("  ");
            }
            else{
                printf("%02d",m);
                m++;
            }
        }
        printf("\n");
    }
    return 0;
}