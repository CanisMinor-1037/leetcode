#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string letter;
    string sentence;
    cin >> letter;
    getchar();
    getline(cin,sentence);
    for(int i=0;i!=letter.length();i++){
        letter[i] = tolower(letter[i]);
    }
    letter += ' ';
    for(int i=0;i!=sentence.length();i++){
        sentence[i] = tolower(sentence[i]);
    }
    sentence += ' ';
    letter.insert(0," ");
    sentence.insert(0," ");
    int ans1 = 0;
    int i = 0;
    int r = 0;
    while(1){
        r = sentence.find(letter,i);

        if(r!=-1){
            ans1++;
            i = r+1;
        }
        else{
            break;
        }
    }
    if(ans1==0){
        cout << -1 << endl;
    }
    else{
    int ans2 = sentence.find(letter);
    cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}