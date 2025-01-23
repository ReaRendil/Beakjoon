#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    string str;
    cin >> N >> str;
    int FN = N;
    int count = 1;

    for(int i = 1;i<FN;i++){
        bool tf = false;
        int num = 0;
        for(int j = 0;j<N;j++){
            if(j+i==N){
                tf = true;
                num = i;
                break;
            }
            if(str[j]==str[j+i]);
            else break;
        }
        if(tf) {
            for(int k = FN-num;k<N;k++){
                str+=str[k];
            }
            N+=num;
            count++;
        }
    }
    cout << count;
}
