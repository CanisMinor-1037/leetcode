#include<iostream>
#include<string>
using namespace std;
int cal(string& str, int x){
    if(str[x]=='V'){
        str[x]='K';
    }
    else{
        str[x]='V';
    }
    int ret = 0;

    for(unsigned long long int i=0;i!=str.length()-1;i++){
        
            if(str[i]=='V'&&str[i+1]=='K'){
                ret++;
            }
        
    }

    if(str[x]=='K'){
        str[x]='V';
    }
    else{
        str[x]='K';
    }
    return ret;
}

int main(){
    int n;
    string s;
    cin >> n;
    getchar();
    cin >> s;
    //cout << s.length();
    int ans = 0;
    int ca;
    for(unsigned long long int i=0;i!=s.length()-1;i++){
        if(s[i]=='V'&&s[i+1]=='K'){
            ans++;
        }
    }
    for(int i=0;i<n;i++){
        ca = cal(s,i);
        if(ca>ans){
            ans = ca;
        }
    }
    cout << ans << endl;
}