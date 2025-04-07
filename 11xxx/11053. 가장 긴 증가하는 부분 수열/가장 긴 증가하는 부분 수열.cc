#include <bits/stdc++.h>
using namespace std;
void mainCode() {
    int N; cin >> N;
    int arr[N];
    int dp [N];
    dp[0] = 0;
    for(int i = 0;i<N;i++) cin >> arr[i];
    for(int i= 0;i<N;i++){
        dp[i] = 1;
        for(int j = 0;j<i;j++){
            if(arr[i] > arr[j]&&dp[i]<=dp[j])
            dp[i]++;
        }
    }
    int max = 0;
    for(int i = 0;i<N;i++) if(max<dp[i]) max = dp[i];
    cout << max;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}
