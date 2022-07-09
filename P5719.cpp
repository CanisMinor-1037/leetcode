#include<stdio.h>
int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    getchar();

    long long sumA, sumB, numA, numB;
    sumA = sumB = numA = numB = 0;

    for(int i=1;i<=n;i++){
        if(i%k==0){
            sumA += i;
            numA++;
        }
        else{
            sumB += i;
            numB++;
        }
    }
    printf("%.1lf %.1lf\n",(double)sumA/numA,(double)sumB/numB);
    return 0;
}