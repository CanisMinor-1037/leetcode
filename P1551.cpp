#include<iostream>
using namespace std;
int n, m, q;
const int maxn = 10010;
int p[maxn];
int f(int x){
    if(p[x] == x){
        return x;
    } else {
        return p[x] = f(p[x]);
    }
}
void gx(int x, int y){
    p[f(y)] = f(x);
    return;    
}

int main(){
    int x, y;
    cin >> n >> m >> q;
    for(int i=1;i<=n;i++){
        p[i] = i;
    }
    for(int i=1;i<=m;i++){
        cin >> x >> y;
        gx(x, y);
    }
    for(int i=1;i<=q;i++){
        cin >> x >> y;
        if(f(x)==f(y)){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}