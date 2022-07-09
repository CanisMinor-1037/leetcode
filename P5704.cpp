#include<cstdio>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch -= 0x20;
    printf("%c\n",ch);
    return 0;
}