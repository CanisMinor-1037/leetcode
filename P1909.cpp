#include<stdio.h>
struct pencilInfo{
    int number;
    int price;
}pi[3];
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<3;i++){
        scanf("%d %d",&pi[i].number,&pi[i].price);
    }
    getchar();
    int ans = 0xffffff;
    int num = 0;
    int cost = 0;
    for(int i=0;i<3;i++){
        if(n%pi[i].number==0){
            num = n/pi[i].number;
        }
        else{
            num = n/pi[i].number + 1;
        }
        cost = num * pi[i].price;
        if(cost < ans){
            ans = cost;
        }
    }
    printf("%d\n",ans);
    return 0;
}