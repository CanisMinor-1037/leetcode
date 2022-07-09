#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    char sz[51];
    scanf("%s",sz);
    getchar();

    int length = strlen(sz);
    char temp;
    for(int i=0;i<length;i++){
        temp = sz[i]-'a';
        temp += n;
        temp %= 26;
        sz[i] = temp+'a';
    }
    printf("%s\n",sz);
    return 0;
}