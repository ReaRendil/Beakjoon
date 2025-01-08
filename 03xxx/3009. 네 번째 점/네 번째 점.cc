#include <bits/stdc++.h>
using namespace std;

void func (int x1,int x2,int x3){
    if(x1==x2){
        cout << x3;
    }else if(x1==x3){
        cout << x2;
    }else{
        cout << x1;
    }
    
}
int main() {
    int x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    func(x1,x2,x3);
    cout << " ";
    func(y1,y2,y3);
    
    return 0; 
}

