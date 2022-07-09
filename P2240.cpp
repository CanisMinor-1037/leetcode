#include<iostream>
#include<algorithm>
using namespace std;
const int maxT = 1002;
const int maxN = 102;
struct Coin{
    double m;
    double v;
}coin[maxN];

bool cmp(Coin& a, Coin& b){
    return a.v/a.m > b.v/b.m;
}

int main(){
    int N;
    double T;
    cin >> N >> T;
    for(int i=0;i<N;i++){
        cin >> coin[i].m >> coin[i].v;
    }
    double ans = 0;
    sort(coin,coin+N,cmp);
    /*for(int i=0;i<N;i++){
        cout << coin[i].m << endl;
    }*/
    double r = T;
    for(int i=0;i<N;i++){
        r = T-coin[i].m;
        if(r>=0){
            ans += coin[i].v;
            T = r;
        } else {
            ans += coin[i].v * T/coin[i].m;
            break;
        }
    }
    printf("%.2lf\n",ans);
    return 0;
}