#include<iostream>
#include<string>
using namespace std;
int main(){
    int m,n;
    string cmd;
    string s;
    cin >> m;
    cin >> s;

    int l, r;
    for(int i=0;i<m;i++){
        cin >> n;
        if(n==1){
            cin >> cmd;
            s += cmd;
            cout << s << endl;
        }
        else if(n==2){
            cin >> l;
            cin >> r;
            s = s.substr(l,r);
            cout << s << endl;
        }
        else if(n==3){
            cin >> l;
            cin >> cmd;
            s.insert(l,cmd);
            cout << s << endl;
        }
        else{
            cin >> cmd;
            l = s.find(cmd);
            cout << l << endl;
        }
    }    
}