#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxN = 50001;
struct POS{
    int x;
    int y;
    int z;
}pos[maxN];

bool cmp(POS& a, POS& b){
    return a.z>b.z;
}

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> pos[i].x >> pos[i].y >> pos[i].z;
    }
    sort(pos,pos+N,cmp);
    double dis=0;

    for(int i=0;i<N-1;i++){
        dis += sqrt((pos[i].x-pos[i+1].x)*(pos[i].x-pos[i+1].x)+(pos[i].y-pos[i+1].y)*(pos[i].y-pos[i+1].y)+(pos[i].z-pos[i+1].z)*(pos[i].z-pos[i+1].z));
    }
    printf("%.3lf\n",dis);
    return 0;
}