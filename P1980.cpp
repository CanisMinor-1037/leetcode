#include<stdio.h>
int main(){
    //printf("%u\n",sizeof(int));
    int n, x;
    scanf("%d %d",&n,&x);
    getchar();
    int ans = 0;
    int j;
    for(int i=1;i<=n;i++){
        j = i;
        while(j!=0){
            if(j%10==x){
                ans++;
            }
            j/=10;
        }
    }
    printf("%d\n",ans);
    return 0;
}