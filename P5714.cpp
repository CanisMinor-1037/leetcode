#include<iostream>
using namespace std;
int main(){
    double m,n;
    cin >> m;
    cin >> n;
    double bmi = m/n/n;
    if(bmi<18.5){
        cout << "Underweight" << endl;
    }
    else if(bmi<24){
        cout << "Normal" << endl;
    }
    else{
        cout << bmi << endl;
        cout << "Overweight" << endl;
    }
}