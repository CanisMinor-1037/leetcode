#include<iostream>
#include<string>
using namespace std;

int f(char c){
    if(c=='a'||c=='d'||c=='g'||c=='j'||c=='m'||c=='p'||c=='t'||c=='w'||c==' '||c=='*'||c=='#'){
        return 1;
    }
    else if(c=='b'||c=='e'||c=='h'||c=='k'||c=='n'||c=='q'||c=='u'||c=='x'){
        return 2;
    }
    else if(c=='c'||c=='f'||c=='i'||c=='l'||c=='o'||c=='r'||c=='v'||c=='y'){
        return 3;
    }
    else if(c=='s'||c=='v'||c=='z'){
        return 4;
    }
    return 0;
}
int main(){
    int ans= 0;
    string s;
    getline(cin, s);
    for(int i=0;i!=s.length();i++){
        ans += f(s[i]);
    }
    printf("%d\n",ans);
    return 0;
}