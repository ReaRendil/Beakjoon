#include <bits/stdc++.h>
using namespace std;
void mainCode() {
    int N; cin >> N;
    long long sum = 0;
    for(int i = 0;i<N;i++){
        sum+=i+1;
    }
    cout << sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}
