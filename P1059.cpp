#include<iostream>
#include<algorithm>
using namespace std;
const int maxN = 101;
int s[maxN];
int d[maxN];
int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> s[i];
    }
    sort(s,s+N);
    int ans = 1;
    d[0] = 1;
    for(int i=1;i<N;i++){
        if(s[i]!=s[i-1]){
            d[i] = 1;
            ans ++; 
        }
        else{
            d[i] = 0;
        }
    }
    printf("%d\n",ans);
    for(int i=0;i<N;i++){
        if(d[i]){
            printf("%d ",s[i]);
        }
    }
    putchar('\n');
    return 0;
}