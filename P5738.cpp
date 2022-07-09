#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 102;
struct Student{
    vector<int> v;
    double average;
}s[maxn];
int main(){
    int n, m;
    cin >> n >> m;
    int temp;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> temp;
            s[i].v.push_back(temp);
        }
        sort(s[i].v.begin(),s[i].v.end());
        for(int k=1;k<m-1;k++){
            s[i].average += s[i].v[k];
        }
        if(m>2){
            s[i].average /= (m-2);
        }
    }
    double ans = -1;
    for(int i=0;i<n;i++){
        if(s[i].average > ans){
            ans = s[i].average;
        }
    }
    printf("%.2lf\n",ans);
    return 0;
}