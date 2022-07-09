#include<stdio.h>
int r[13];
int cal(int i){
    if(r[i]!=0){
        return r[i];
    }
    else{
        return r[i]=i*cal(i-1);
    }
}

int main(){
    r[0] = 1;
    r[1] = 1;
    cal(12);
    int n;
    scanf("%d",&n);
    getchar();
    printf("%d\n",r[n]);
    return 0;
}