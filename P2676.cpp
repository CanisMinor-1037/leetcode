#include<iostream>
#include<algorithm>
using namespace std;
const int maxN = 20001;
bool cmp(uint64_t a, uint64_t b){
    return a>b;
}
uint64_t H[maxN];
int main(){
    uint64_t S, B;
    int N;
    cin >> N >> B;
    for(int i=0;i<N;i++){
        cin >> H[i];
    }
    sort(H,H+N,cmp);
    S = 0;
    int i;
    for(i=0;i<N&&S<B;i++){
        S += H[i]; 
    }
    cout << i << endl;
    return 0;
}