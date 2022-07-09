#include<iostream>
using namespace std;
const int maxn = 2000001;
bool A[maxn];


void switchLight(int index){
    if(A[index]==true){
        A[index]=false;
    }
    else{
        A[index]=true;
    }
}

int main(){
    int n;
    cin >> n;
    int t;
    double a;
    for(int i=0;i<n;i++){
        cin >> a >> t;
        for(int j=1;j<=t;j++){
            switchLight((int)(j*a));
        }
    }
    for(int i=1;i<maxn;i++){
        if(A[i]==true){
            cout << i << endl;
            return 0;
        }
    }
}