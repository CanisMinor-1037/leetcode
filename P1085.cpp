#include<stdio.h>
struct courseTable{
    int onClass;
    int afterClass;
    int all;
    int unhappy;
}ct[8];
int main(){
    int flag = 0;
    int ans = 1;
    for(int i=1;i<=7;i++){
        scanf("%d %d",&ct[i].onClass,&ct[i].afterClass);
        getchar();
        ct[i].all = ct[i].onClass + ct[i].afterClass;
        if(ct[i].all > 8){
            ct[i].unhappy = 1;
            flag = 1;
        }
    }
    if(flag == 0){
        printf("0\n");
        return 0;
    }
    for(int i=1;i<=7;i++){
        if(ct[i].unhappy == 1){
            if(ct[i].all>ct[ans].all){
                ans = i;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}