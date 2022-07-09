#include<iostream>
#include<string>
using namespace std;
int main(){
    string fs;
    cin >> fs;
    int N = fs.length();

    string s[N-1];
    for(int i=0;i<N-1;i++){
        cin >> s[i];
        fs += s[i];
    }
    //cout << fs << endl;
    cout << N << ' ';
    int status = 0;
    int count=0;
    int i=0;
    char ch;
    while(i!=fs.length()){
        ch = fs[i];
        if(ch=='0'&&status==0){
            count++;
        }
        else if(ch=='0'&&status==1){
            cout << count << ' ';
            count = 1;
            status = 0;
        }
        else if(ch=='1'&&status==1){
            count++;
        }
        else{
            cout << count << ' ';
            count = 1;
            status = 1;
        }
        i++;
    }
    
    cout << count << '\n';
    return 0;
}