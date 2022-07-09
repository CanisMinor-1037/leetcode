#include<cmath>
#include<iostream>
using namespace std;
double cal(double x1, double x2, double y1, double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double ans = cal(x1,x2,y1,y2)+cal(x1,x3,y1,y3)+cal(x2,x3,y2,y3);
    printf("%.2lf\n",ans);
    return 0;
}