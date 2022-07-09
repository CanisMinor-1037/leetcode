#include<stdio.h>
const int maxl = 10002;
int tree[maxl];
int main(){
    int l, m;
    scanf("%d %d",&l,&m);
    for(int i=0;i<=l;i++){
        tree[i] = 1;
    }
    int u,v;
    for(int i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        for(int i=u;i<=v;i++){
            tree[i] = 0;
        }
    }
    int ans = 0;
    for(int i=0;i<=l;i++){
        if(tree[i] == 1){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}