#include<iostream>
using namespace std;
typedef unsigned long long ULL;
ULL jcr[121] {1,1};
ULL jc(int i){
    if(jcr[i]!=0){
        return jcr[i];
    }
    else{
        return jcr[i]=jc(i-1)*i;
    }
}
ULL c(int i,int j){
    if(i==0||j==0){
        return 1;
    }
    else{
        return jc(i)/jc(j)/jc(i-j);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << c(i,j) << " ";
        }
        cout << "\n";
    }
    return 0;

}