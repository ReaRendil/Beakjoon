#include <bits/stdc++.h>
using namespace std;
void mainCode() {
    int N; cin >> N;
    int arr[N];
    int sortArr[N];
     for(int i =0;i<N;i++) cin >> arr[i];
    bool tf = false;
    for(int i = 0;i<N;i++){
        if(arr[i]<=arr[i+1]&&i+1<N){
            tf = true;
            break;
        }
        if(arr[i]>=arr[i+1]&&arr[i+1]>=arr[i+2]&&i+2<N){
            tf = true;
            break;
        }
    }
    if(tf) cout << "YES";
    else cout << "NO";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}
