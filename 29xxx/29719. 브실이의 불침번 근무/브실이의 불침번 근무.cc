#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 1000000007
void MainCode(){
    int N,M; cin >> N >> M;
    ll sumA = 1,sumB = 1;
    for(int i = 0;i<N;i++){
        sumA*=M;
        sumB*=(M-1);
        sumA%=Mod; sumB%=Mod;
    }
    cout << (sumA-sumB+Mod)%Mod;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    MainCode();
}
