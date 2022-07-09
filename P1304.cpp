#include<iostream>
using namespace std;

int Prime[10001];

int isPrime(int x){
    
    if(Prime[x] == 1){
        return true;
    }
    if(Prime[x] == -1){
        return false;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            Prime[x] = -1;
            return false;
        }
    }
    Prime[x] = 1;
    return true;
}
int main(){
    Prime[0] = -1;
    Prime[1] = -1;
    Prime[2] = 1;
    int n;

    cin >> n;
    for(int i=4;i<=n;i+=2){
        if(i==4){
            printf("4=2+2\n");
        }
        for(int a=3;a<i;a+=2){
            if(isPrime(a)&&isPrime(i-a)){
                printf("%d=%d+%d\n",i,a,i-a);
                break;
            }
        }
    }
    return 0;
}