#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxN = 1001;
int64_t n[maxN];
int64_t s[maxN];
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> n[i];
    }
    for(int i=0;i<N-1;i++){
        s[i] = abs(n[i+1]-n[i]);
    }
    sort(s,s+N);
    for(int i=0;i<N;i++){
        if(i!=s[i]){
            cout << "Not jolly\n";
            return 0;
        }
    }
    cout << "Jolly\n";
    return 0;
}