#include<stdio.h>
typedef unsigned long long ULL;
const int maxn = 10001;
ULL a[maxn];
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    int ans = 1;
    int cur = 1;
    int l = 1;
    int r = 1;
    scanf("%llu",&a[1]);
    for(int i=2;i<=n;i++){
        scanf("%llu",&a[i]);
        if(a[i]==a[i-1]+1){
            cur++;
            r++;
            if(cur>ans){
                ans = cur;
            }
        }
        else{
            cur = 1;
            r++;
            l = r;
        }
    }
    printf("%d\n",ans);
    return 0;
}