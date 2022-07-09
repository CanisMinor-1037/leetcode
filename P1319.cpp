#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int maxN = N*N;
    int used = 0;
    int temp;
    int status=0;
    int Num[maxN];

    while(1){
        cin >> temp;
        if(status==0){
            for(int i=0;i<temp;i++){
                Num[used++]=0;
            }
            status=1;   
        }
        else{
            for(int i=0;i<temp;i++){
                Num[used++]=1;
            }
            status=0;
        }

        if(used==maxN){
            break;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<Num[i*N+j];
        }
        cout<<'\n';
    }
    return 0;
}