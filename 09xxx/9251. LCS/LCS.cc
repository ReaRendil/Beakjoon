#include <bits/stdc++.h>
using namespace std;
int LCS [1001][1001];
void MainCode(){
    string str1,str2; cin >> str1 >> str2;
    
    for(int i = 1;i<=str1.size();i++){
        for(int j = 1;j<=str2.size();j++){
            if(str1[i-1]==str2[j-1]){
                LCS[i][j] = LCS[i-1][j-1] + 1;
            }else{
                if(LCS[i-1][j]>LCS[i][j-1]) LCS[i][j] = LCS[i-1][j];
                else LCS[i][j] = LCS[i][j-1];
            }
        }
    }
    int max = 0;
    for(int i = 1;i<=str1.size();i++)
    for(int j = 1;j<=str2.size();j++){
        if(LCS[i][j]>max) max = LCS[i][j];
    }

    cout << max;
   
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    MainCode();
}
