#include<algorithm>
#include<iostream>
#include<iomanip>
using namespace std;
const int maxN = 10002;
int finger[maxN];
int N, M;
int main(){
    cin >> N;
    cin >> M;
    for(int i=0;i<N;i++){
        cin >> finger[i];
    }
    for(int i=0;i<M;i++){
        next_permutation(finger,finger+N);
    }
    for(int i=0;i<N;i++){
        cout << finger[i] << " ";
    }
    cout << endl;
    return 0;
}