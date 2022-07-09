#include<stdio.h>
int main(){
    int num = 1;
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%02d",num);
            num++;
        }
        printf("\n");
    }
}