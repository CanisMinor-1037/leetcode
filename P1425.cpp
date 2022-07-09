#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    getchar();
    int start = a*60+b;
    int end = c*60+d;
    int cost = end-start;

    printf("%d %d\n",cost/60,cost%60);
    return 0;
}