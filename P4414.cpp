#include<stdio.h>
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    getchar();

    if(a>b){
        swap(a,b);
    }
    if(b>c){
        swap(b,c);
    }
    if(a>b){
        swap(a,b);
    }

    char cmd[5];
    scanf("%s",cmd);
    getchar();

    for(int i=0;i<3;i++){
        if(cmd[i]=='A'){
            printf("%d",a);
        }
        else if(cmd[i]=='B'){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
        if(i<2){
            putchar(' ');
        }
        if(i==2){
            putchar('\n');
        }
    }
}