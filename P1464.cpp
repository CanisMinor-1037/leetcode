#include<iostream>
const int maxn {22};
int64_t w[maxn][maxn][maxn];
bool set[maxn][maxn][maxn];
void init(){
    set[0][0][0] = true;
    w[0][0][0] = 1;
}
int64_t cal(int a, int b, int c){
    if(a<=0||b<=0||c<=0){
        return 1;
    } else if(a>20||b>20||c>20) {
        //set[20][20][20] = true;
        return w[20][20][20] = cal(20,20,20);
    }
    if(set[a][b][c]){
        return w[a][b][c];
    } else {
        set[a][b][c] = true;
        if(a<b&&b<c){
            return w[a][b][c] = cal(a,b,c-1)+cal(a,b-1,c-1)-cal(a,b-1,c);
        } else {
            return w[a][b][c] = cal(a-1,b,c)+cal(a-1,b-1,c)+cal(a-1,b,c-1)-cal(a-1,b-1,c-1);
        }
    }
}
using namespace std;
int main(){
    int a,b,c;
    while(1){
        cin >> a >> b >> c;
        if(a==-1&&b==-1&&c==-1){
            break;
        } else {
            printf("w(%d, %d, %d) = %lld\n",a,b,c,cal(a,b,c)); 
        }
    }
    return 0;
}