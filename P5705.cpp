#include<cstdio>
#include<cstring>
int main()
{
    char s[7];
    scanf("%s",s);
    unsigned i = strlen(s)-1;
    while(i!=0){
        putchar(s[i]);
        i--;
    } 
    putchar(s[0]);
    return 0;
}