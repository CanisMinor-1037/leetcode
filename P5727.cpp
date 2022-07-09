#include<stdio.h>
const int maxn = 1001;
int a[maxn];
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    int i = 0;
    a[0] = n;
    while(n!=1){
        if(n%2==0){
            n/=2;
            a[++i]=n;
        }
        else{
            n = 3*n+1;
            a[++i]=n;
        }
    }
    for(int j=i;j>0;j--){
        printf("%d ",a[j]);
    }
    printf("%d\n",a[0]);
    return 0;
}