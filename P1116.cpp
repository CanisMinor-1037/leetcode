#include<iostream>
using namespace std;
const int maxN = 10001;
int t[maxN];
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> t[i];
    }
    int temp;
    int ans = 0;
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if(t[j]>t[j+1]){
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
                ans++;
            }
        }
    }
    cout << ans << endl;
}