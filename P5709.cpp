#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int m, t, s;
    scanf("%d %d %d",&m,&t,&s);
    getchar();
    if(t==0){
        printf("0\n");
        return 0;
    }
    if(s%t==0){
        printf("%d\n",max(0,m-s/t));
    }
    else{
        printf("%d\n",max(0,m-s/t-1));
    }
    return 0;
}