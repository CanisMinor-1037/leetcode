#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1e6 + 2;
struct Node{
    int left;
    int right;
}node[maxn];

int ans = 0;
void dfs(int id, int depth){
    if(id == 0){
        return;
    }
    ans = max(ans, depth);
    dfs(node[id].left,depth+1);
    dfs(node[id].right,depth+1);
}

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> node[i].left >> node[i].right;
    }
    dfs(1,1);
    cout << ans << endl;
    return 0;
}