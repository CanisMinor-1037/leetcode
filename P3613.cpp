#include<iostream>
#include<map>
using namespace std;
const int maxn = 1e5+2; 
map<int, uint64_t> m[maxn];
int main(){
    int n, q;
    int cmd;
    int index, key;
    uint64_t val;
    cin >> n >> q;
    for(int i=0;i<q;i++){
        cin >> cmd;
        if(cmd==1){
            cin >> index >> key >> val;
            m[index][key] = val;  
        } else {
            cin >> index >> key;
            cout << m[index][key] << endl;
        }
    }
    return 0;
}