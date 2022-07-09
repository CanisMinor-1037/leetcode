#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 200010;
int a[maxn];
int f[maxn];//f[i]: 结尾为i的最优解
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int ans = -0xfffff;

    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        f[i] = max(f[i-1]+a[i],a[i]);
        ans = max(ans,f[i]);
    }
    printf("%d\n",ans);

    return 0;
}