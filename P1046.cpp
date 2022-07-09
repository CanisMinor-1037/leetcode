#include<stdio.h>
int height[10];
int main(){
    for(int i=0;i<10;i++){
        scanf("%d",&height[i]);
    }
    getchar();
    
    int h;
    scanf("%d",&h);
    getchar();
    
    h += 30;
    int ans = 0;
    for(int i=0;i<10;i++){
        if(h>=height[i]){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}