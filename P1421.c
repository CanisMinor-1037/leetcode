#include<stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c = 10*a+b;
    c /= 19;
    printf("%d\n",c);
    return 0;
}