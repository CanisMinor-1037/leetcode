#include<stdio.h>
#include<string.h>
int main(){
    char s[102];
    scanf("%s",s);
    getchar();

    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    printf("%s\n",s);
    return 0;
}