#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int n, r;
int ranks[25];
void dfs(int done){
    if(done == r){
        for(int i=1;i<=r;i++){
            cout << setw(3) << ranks[i];
        }
        cout << endl;
    } else {
        for(int i=ranks[done]+1;i<=n;i++){
            ranks[done + 1] = i;
            dfs(done+1);
        }
    }
}
int main(){
    cin >> n >> r;
    dfs(0);
    return 0;
}