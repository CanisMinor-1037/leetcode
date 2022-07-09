#include<iostream>
#include<string>
using namespace std;
const int maxn = 11;
char block1[maxn][maxn];
char block2[maxn][maxn];
char change[maxn][maxn];
char temp[maxn][maxn];
bool cmp(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(block2[i][j]!=change[i][j]){
                return false;
            }
        }
    }
    return true;
}

void print_block1(int n){
    cout << "block1:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << block1[i][j];
        }
        cout << '\n';
    }
}

void print_block2(int n){
    cout << "block2:\n";
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << block2[i][j];
        }
        cout << '\n';
    }
}

void print_temp(int n){
    cout << "temp:\n";
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << temp[i][j];
        }
        cout << '\n';
    }
}

void print_change(int n){
    cout << "change:\n";
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << change[i][j];
        }
        cout << '\n';
    }
}

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> block1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> block2[i][j];
        }
    }
   // print_block1(n);
   // print_block2(n);
    //1
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[j][n-1-i] = block1[i][j];
        }
    }
   // print_change(n);
    if(cmp(n)){
        //cout << "true\n";
        cout << "1\n";
        return 0;
    }

    //2
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = change[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[j][n-1-i] = temp[i][j];
        }
    }
    if(cmp(n)){
        cout << "2\n";
        return 0;
    }

    //3
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = change[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[j][n-1-i] = temp[i][j];
        }
    }
    if(cmp(n)){
        cout << "3\n";
        return 0;
    }

    //4
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[i][n-1-j] = block1[i][j];
        }
    }
    if(cmp(n)){
        cout << "4\n";
        return 0;
    }

    //5
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = change[i][j];
        }
    }
    //5-1
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[j][n-1-i] = temp[i][j];
        }
    }
    if(cmp(n)){
        cout << "5\n";
        return 0;
    }

    //5-2
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = change[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[j][n-1-i] = temp[i][j];
        }
    }
    if(cmp(n)){
        cout << "5\n";
        return 0;
    }

    //5-3
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = change[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[j][n-1-i] = temp[i][j];
        }
    }
    if(cmp(n)){
        cout << "5\n";
        return 0;
    }

    //6
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            change[i][j] = block1[i][j];
        }
    }
    if(cmp(n)){
        cout << "6\n";
        return 0;
    }

    cout << "7\n";
    return 0;
}