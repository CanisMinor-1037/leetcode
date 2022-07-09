#include<stdio.h>
const int maxn = 1001;
int score[maxn];
int main(){
    int max, min;
    max = -1;
    min = 11;
    int n;
    int sum = 0;
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        scanf("%d",&score[i]);
        sum += score[i];
        if(score[i]>max){
            max = score[i];
        }
        if(score[i]<min){
            min = score[i];
        }
    }
    sum -= (min+max);
    printf("%.2lf\n",(double)sum/(n-2));
    return 0;
}