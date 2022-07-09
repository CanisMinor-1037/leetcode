#include<stdio.h>
const double a1 = 0.4463;
const double a2 = 0.4663;
const double a3 = 0.5663;
int main(){
    int e;
    scanf("%d",&e);
    getchar();
    double cost;
    if(e<=150){
        cost = e*a1;
    }
    else if(e>150&&e<=400){
        cost = 150*a1+(e-150)*a2;
    }
    else{
        cost = 150*a1+(400-150)*a2+(e-400)*a3;
    }
    printf("%.1lf\n",cost);
    return 0;
}