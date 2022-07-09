#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int a, b, c;
    int grade;
    scanf("%d %d %d",&a,&b,&c);
    getchar();

    grade = a*0.2+b*0.3+c*0.5;
    printf("%d\n",grade);
    return 0;
}