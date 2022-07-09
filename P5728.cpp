#include<stdio.h>
const int maxn = 1001;
struct grade 
{
    int y;
    int s;
    int w;
    int t;
}g[maxn];   

int abs(int a, int b){
    return (a-b>0)?(a-b):(b-a);
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    for(int i=0;i<n;i++){
        scanf("%d %d %d",&g[i].y,&g[i].s,&g[i].w);
        g[i].t = g[i].y + g[i].s + g[i].w;
    }

    int ans = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(g[i].s,g[j].s)<6&&abs(g[i].y,g[j].y)<6&&abs(g[i].w,g[j].w)<6&&abs(g[i].t,g[j].t)<11){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
