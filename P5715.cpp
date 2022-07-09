#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    getchar();

    int temp;
    for(int i=0;i<2;i++){
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        if(b>c){
            temp = c;
            c = b;
            b = temp;
        }
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}