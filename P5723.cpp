#include<stdio.h>
bool isPrime(int n){
    if(n==2){
        return true;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int L;
    int num = 0;
    scanf("%d",&L);
    getchar();

    for(int i=2;i<=L;i++){
        if(isPrime(i)){
            printf("%d\n",i);
            L-=i;
            num++;
        }
    }
    printf("%d\n",num);
    return 0;
}