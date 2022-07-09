#include<iostream>
using namespace std;
int rule[5][5] {
    { 0,-1, 1, 1,-1},
    { 1, 0,-1, 1,-1},
    {-1, 1, 0,-1, 1},
    {-1,-1, 1, 0, 1},
    { 1, 1,-1,-1, 0}
};

const int max_N = 201;
const int max_Na = 201;
const int max_Nb = 201;
int game[2][max_N];
int Ta[max_Na];
int Tb[max_Nb];

int main(){
    int N,Na,Nb;
    cin >> N >> Na >> Nb;
    for(int i=0;i<Na;i++){
        cin >> Ta[i];
    }
    for(int i=0;i<Nb;i++){
        cin >> Tb[i];
    }
    for(int i=0;i<N;i++){
        game[0][i] = Ta[i%Na];
    }
    for(int i=0;i<N;i++){
        game[1][i] = Tb[i%Nb];
    }
    int score_A, score_B;
    score_A = score_B = 0;
    int res;
    for(int i=0;i<N;i++){
        res = rule[game[0][i]][game[1][i]];
        if(res == 1){
            score_A++;
        }
        if(res == -1){
            score_B++;
        }
    }
    cout << score_A << " " << score_B << "\n";
    return 0;
}