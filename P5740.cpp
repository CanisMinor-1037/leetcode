#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct Student{
    string name;
    int y;
    int s;
    int w;
    int t;
    int id;
}s[1002];

bool cmp(Student& a, Student& b){
    if(a.t == b.t) return a.id<b.id;
    return a.t > b.t;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i].name;
        cin >> s[i].y >> s[i].s >> s[i].w;
        s[i].id = i;
        s[i].t = s[i].y + s[i].s + s[i].w;
    }
    sort(s,s+n,cmp);
    cout << s[0].name << " " << s[0].y << " " << s[0].s << " " << s[0].w << endl;
    return 0;
}