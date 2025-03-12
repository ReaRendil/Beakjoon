#include <bits/stdc++.h>
using namespace std;
int arr[64][64];

void divide(int x,int y,int s){
    for(int i = x;i<x+s;i++){
        for(int j = y;j<y+s;j++){
            if(arr[x][y]!=arr[i][j]){
                cout << "(";
                divide(x,y,s/2);
                divide(x,y+s/2,s/2);
                divide(x+s/2,y,s/2);
                divide(x+s/2,y+s/2,s/2);
                cout << ")";
                return;
            }
        }
    }
    if(arr[x][y]==0){
        cout << 0;
    }else cout << 1;
}
void mainCode(){
    int T;
    cin >> T;
    for(int i = 0;i<T;i++){
        string str;
        cin >> str;
        for(int j = 0;j<T;j++){
            arr[i][j] = (int)str[j]-48;
        }
    }
     divide(0,0,T);
     
}


int main(){
    mainCode();
}