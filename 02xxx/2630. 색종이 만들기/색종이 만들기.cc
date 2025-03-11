#include <bits/stdc++.h>
using namespace std;
int arr[128][128];
int b = 0,w = 0;

void divide(int x,int y,int s){
    for(int i = x;i<x+s;i++){
        for(int j = y;j<y+s;j++){
            if(arr[x][y]!=arr[i][j]){
                divide(x,y,s/2);
                divide(x,y+s/2,s/2);
                divide(x+s/2,y,s/2);
                divide(x+s/2,y+s/2,s/2);
                return;
            }
        }
    }
    if(arr[x][y]==0){
        w++;
    }else b++;
}
void mainCode(){
    int T;
    cin >> T;
    for(int i = 0;i<T;i++){
        for(int j = 0;j<T;j++){
            cin >> arr[i][j];
        }
    }
     divide(0,0,T);

     cout << w << endl << b;
}


int main(){
    mainCode();
}