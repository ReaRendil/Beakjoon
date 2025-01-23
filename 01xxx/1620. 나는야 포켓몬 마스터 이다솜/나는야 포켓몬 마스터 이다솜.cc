#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    map<int,string> poket;
    map<string,int> re_Poket;
    for(int i = 1;i<=n;i++){
        string str;
        cin >> str;
        poket[i] = str;
        re_Poket[str] = i;
    }
    for(int i = 0;i<m;i++){
        string str;
        cin >> str;
        if(isdigit(str[0])){
            int num = stoi(str);
            cout << poket[num] << "\n";
        }else{
            cout << re_Poket[str]<<"\n";
        }
    }
    return 0; 
}
