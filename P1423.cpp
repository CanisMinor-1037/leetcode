#include<stdio.h>

double distance(int step){
    double a=0.98;
    for(int i=1;i<step;i++){
        a *= 0.98;
    }
    return 100*(1-a);    
}
int main(){
    double length;
    scanf("%lf",&length);
    getchar();

    int step;
    for(step=1;distance(step)<length;step++);
    printf("%d\n",step);
    return 0;
}