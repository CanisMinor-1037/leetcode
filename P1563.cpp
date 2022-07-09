#include<cstdio>
#include<cstring>
const int maxn = 100001;
struct ds{
    int t;//0: 圈内, 1:圈外
    char s[10];
}dt[maxn];

int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    getchar();
    int index = 1;
    for(int i=1;i<=n;i++){
        scanf("%d %s",&(dt[i].t),dt[i].s);
    }//逆时针++,顺时针--

    int ai,si;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&ai,&si);
        if((dt[index].t==0&&ai==1)||(dt[index].t==1&&ai==0)){
            index+=si;
            index%=n;
            if(index==0){
                index+=n;
            }
        }//逆时针
        else if((dt[index].t==0&&ai==0)||(dt[index].t==1&&ai==1)){
            index-=si;
            index%=n;
            if(index<=0){
                index+=n;
            }
        }//顺时针
    }
    printf("%s\n",dt[index].s);
    return 0;
}