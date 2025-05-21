#include <bits/stdc++.h>
using namespace std;

int priority(char ch){
    if(ch == '+' || ch == '-') return 1;
    if(ch == '*' || ch == '/') return 2;
    else return 0;
}

void mainCode(){
    string str; cin >> str;
    stack<char> stk;
    for(int i = 0;i<str.length();i++){
        char ch = str[i];
        if(priority(ch)>0){
            while(!stk.empty() && priority(ch)<=priority(stk.top())){
                cout << stk.top();
                stk.pop();
            }
            stk.push(ch);
        }else if(ch == '('){
            stk.push(ch);
        }else if(ch == ')'){
            char tmp = stk.top();
            stk.pop();
            while(tmp != '('){
                cout << tmp;
                tmp = stk.top();
                stk.pop();
            }
        }else{
            cout << ch;
        }
    }
    while ((!stk.empty()))
    {
        cout << stk.top();
        stk.pop();
    }
    
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    mainCode();
}