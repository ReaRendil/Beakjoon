#include <bits/stdc++.h>
using namespace std;
int N;
char board [10000][10000];
   
void recursion(int n){
    if(n%2==0){
        recursion(n/2);
        int m = n/2;
        int gap = n-1;
    for(int i = 0;i<m;i++){
        int num = 0;
        for(int j = 0;j<i*2+1;j++){
            board[m+i][num] = board[i][j];
            num++;
        }
        for(int j = 0;j<gap;j++){
            board[m+i][num] = ' ';num++;
        }
        gap-=2;
        for(int j = 0;j<i*2+1;j++){
            board[m+i][num] = board[i][j];
            num++;
        }
    }
    }else{
        for(int i = 0;i<3;i++){
            for(int j = 0;j<i*2+1;j++){
                board[i][j] = '*';
            }
        }
        board[1][1] = ' ';
    }

}
void mainCode(){
    cin >> N;
    recursion(N);
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N-i-1;j++){
            cout << ' ';
        }
        for(int j = 0;j<i*2+1;j++){
            cout << board[i][j] ;
        }
        for(int j = 0;j<N-i;j++){
            cout << ' ';
        }
        cout << "\n";
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    mainCode();
}