#include<stdio.h>

int main(){
    int n,temp;
    scanf("%d",&n);
    getchar();

    int ans = 0xfffff;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp<ans){
            ans = temp;
        }
    }
    printf("%d\n",ans);
    return 0;
}