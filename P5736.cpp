#include<iostream>
using namespace std;
struct Int{
    int32_t i;
    bool prime;
}in[102];

bool isPrime(int32_t x){
    if(x == 1){
        return false;
    } else if (x == 2){
        return true;
    } else {
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> in[i].i;
        if(isPrime(in[i].i)){
            in[i].prime = true;
        }
    }
    for(int i=0;i<n;i++){
        if(in[i].prime == true){
            printf("%d ",in[i].i);
        }

    }
            printf("\n");
    return 0;
}