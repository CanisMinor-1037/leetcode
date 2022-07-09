#include<stdio.h>
#include<string.h>
const int maxn = 1001;
char a[maxn];
char b[maxn];
char c[maxn];
char num_a[maxn];
char num_b[maxn];
int temp;
int main()
{

    int length = 0;
    int index = maxn-1;
    fgets(num_a,maxn,stdin);
    length = strlen(num_a)-1;
    for(int i=length-1;i>=0;i--){
        a[index] = num_a[i] - '0';
        index--;
    }

    index = maxn-1;
    fgets(num_b,maxn,stdin);
    length = strlen(num_b)-1;
    for(int i=length-1;i>=0;i--){
        b[index] = num_b[i] - '0';
        index--;
    }

    temp = 0;
    for(index=maxn-1;index>=0;index--){
        temp = a[index]+b[index]+ temp;
        c[index] = temp%10;
        temp/=10;
    }
    
    for(index=0;index<maxn;index++){
        if(c[index]!=0){
            break;
        }
    }
    if(index==maxn){
        printf("0");
    }
    for(;index<maxn;index++){
        printf("%u",c[index]);
    }
    printf("\n");
}