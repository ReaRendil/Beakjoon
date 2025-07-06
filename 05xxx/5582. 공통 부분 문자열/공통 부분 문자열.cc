#include <bits/stdc++.h>
using namespace std;
int dp[4001][4001];
void MainCode(){
    string str1,str2; cin >> str1 >> str2;

    for(int i = 0;i<str1.size();i++){
        for(int j = 0;j<str2.size();j++){
            if(str1[i]==str2[j]){
                dp[i+1][j+1] = dp[i][j] + 1;
            }else{
                dp[i+1][j+1] = 0;
            }
        }
    }
    int max = 0;
    for(int i = 0;i<=str1.size();i++)for(int j = 0;j<=str2.size();j++){
        if(dp[i][j]>max) max = dp[i][j];
    }
    cout << max;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    MainCode();
}
