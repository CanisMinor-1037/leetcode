#include<iostream>
#include<algorithm>
using namespace std;
int num[9] {1,2,3,4,5,6,7,8,9};
int main(){
    int N[3];
    int A, B, C;
    cin >> A >> B >> C;
    int v = 0;
    do{
       // for(int i=0;i<9;i++){
       //     cout << num[i] << " ";
       // }
       // cout << endl;
        N[0] = 100*num[0] + 10*num[1] + num[2];
        N[1] = 100*num[3] + 10*num[4] + num[5];
        N[2] = 100*num[6] + 10*num[7] + num[8];
        //sort(N,N+3);
        
        if(A*N[1] == B*N[0] && B*N[2] == C*N[1]){
            cout << N[0] <<" "<< N[1] <<" "<< N[2] << endl;
            v = 1;
        }
    }while(next_permutation(num,num+9));
    if(v==0){
        cout << "No!!!" << endl;
    }
    return 0;
}