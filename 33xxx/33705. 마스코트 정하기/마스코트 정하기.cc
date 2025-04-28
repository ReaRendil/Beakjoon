#include <bits/stdc++.h>
using namespace std;
void mainCode() {
    int N; cin >> N;
    int arr[N];
    int sum[N];
    int rsum[N];
    for(int i = 0;i<N;i++){
        cin >> arr[i];
        if(arr[i]!=1) arr[i] = 0;
    }
    sum[0] = arr[0];
    for(int i = 1;i<N;i++){
        sum[i]= sum[i-1] + arr[i];
    }
    rsum[0] = arr[N-1];
    for(int i = 1;i<N;i++){
        rsum[i] = rsum[i-1] + arr[N-i-1];
    }
    bool tf = false;
    for(int i = 0;i<N;i++){
        if(sum[i]*2>=i+1||rsum[i]*2>=i+1){
            tf = true;
        }
    }
    if(sum[N-1]*2>=N){
        cout << "0";
    //처음 부터 만족할 경우
    }else if(tf){;
        cout << "1";
    }else {
        cout << "2";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}