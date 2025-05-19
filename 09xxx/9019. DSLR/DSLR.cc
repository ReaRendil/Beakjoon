#include <bits/stdc++.h>
using namespace std;
int  D(int n){
    return (n*2)%10000;
}
int S(int n){
    if(n==0) return 9999;
    else return n-1;
}
int L(int n){
    return (n*10)%10000 + n/1000;
}
int R(int n){
    return (n/10) + (n%10)*1000;
}
void recursion(){
    
}
void mainCode(){
    int initialValue,finalValue;
    cin >> initialValue >> finalValue;
    queue<int> que;
    que.push(initialValue);
    int prev[10000];
    memset(prev, -1, sizeof(prev));
    while(!que.empty()){
        int n = que.front();
        que.pop();
        if(n==finalValue){
            break;
        }
        int next = D(n);
        if (prev[next] == -1) {
            prev[next] = n;
            que.push(next);
        }
        
        next = S(n);
        if (prev[next] == -1) {
            prev[next] = n;
            que.push(next);
        }
        
        next = L(n);
        if (prev[next] == -1) {
            prev[next] = n;
            que.push(next);
        }
        
        next = R(n);
        if (prev[next] == -1) {
            prev[next] = n;
            que.push(next);
        }


    }
    stack <char> stk;
    int n = finalValue;
    while(n!=initialValue){
        if(D(prev[n])==n) stk.push('D');
        else if(S(prev[n])==n) stk.push('S');
        else if(L(prev[n])==n) stk.push('L');
        else if(R(prev[n])==n) stk.push('R');
        n = prev[n];
    }

    while(!stk.empty()){
        cout << stk.top();
        stk.pop();
    }
    cout << "\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;cin >> N;
    for(int i = 0;i<N;i++)
    mainCode();
}