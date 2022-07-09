#include<iostream>
const uint64_t maxn = 2e6 + 2;
uint64_t id[maxn];
using namespace std;
int main(){
    uint64_t n,m, index;
    cin >> n >> m;
    for(uint64_t i=1;i<=n;i++){
        cin >> id[i];
    }
    for(uint64_t i=1;i<=m;i++){
        cin >> index;
        cout << id[index] << endl;
    }
    return 0;
}