#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int op1, op2;
    int len;
    string exp;
    cin >> exp;
    for(int i=0;i<exp.length();i++){
        s.push(exp[i]);
        if(s.top()=='.'){
            s.pop();
            op1 = 0;
            len = 0;
            while(s.top()>='0'&&s.top()<='9'){
                op1 = op1*10 + s.top() - '0';
                len++;
                s.pop();
                if(s.empty()==true){
                    break;
                }
            }
            op2 = 0;
            while(op1!=0){
                op2 = op2*10 + op1%10;
                op1 /= 10;
                len--;
            }
            while(len!=0){
                op2*=10;
                len--;
            }
            s.push(op2);
        } else if(s.top()=='*'){
            s.pop();
            op1 = s.top();
            s.pop();
            op2 = s.top();
            s.pop();
            op2 *= op1;
            s.push(op2);
        } else if(s.top()=='+'){
            s.pop();
            op1 = s.top();
            s.pop();
            op2 = s.top();
            s.pop();
            op2 += op1;
            s.push(op2);
        } else if(s.top()=='-'){
            s.pop();
            op1 = s.top();
            s.pop();
            op2 = s.top();
            s.pop();
            op2 -= op1;
            s.push(op2);
        } else if(s.top()=='@'){
            s.pop();
            cout << s.top() << endl;
            break;
        } else if(s.top()=='/'){
            s.pop();
            op1 = s.top();
            s.pop();
            op2 = s.top();
            s.pop();
            op2 /= op1;
            s.push(op2);
        }
    }
    return 0;
}