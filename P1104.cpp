#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
const int maxN = 101;
struct Student{
    string name;
    int year;
    int month;
    int day;
    int index;
}s[maxN];

bool cmp(Student& a, Student& b){
    if(a.year<b.year){
        return true;
    }
    else if(a.year>b.year){
        return false;
    }
    else{
        if(a.month<b.month){
            return true;
        }
        else if(a.month>b.month){
            return false;
        }
        else{
            if(a.day<b.day){
                return true;
            }
            else if(a.day>b.day){
                return false;
            }
            else{
                if(a.index<b.index){
                    return false;
                }
                else{
                    return true;
                }
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i].name >> s[i].year >> s[i].month >> s[i].day;
        s[i].index = i;
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout << s[i].name << endl;
    }
    return 0;
}