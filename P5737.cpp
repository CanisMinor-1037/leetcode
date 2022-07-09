#include<stdio.h>
const int maxn = 1500;
int A[maxn];
bool isY(int x){
    if((x%4==0&&x%100!=0)||(x%400==0)){
        return true;
    }
    return false;
}

int main(){
    int x, y;
    scanf("%d %d",&x,&y);
    getchar();

    int ans = 0;
    for(int i=x;i<=y;i++){
        if(isY(i)){
            ans++;
            A[ans] = i;
        }
    }
    printf("%d\n",ans);
    for(int i=1;i<=ans;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}