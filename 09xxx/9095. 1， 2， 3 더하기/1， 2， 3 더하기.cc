#include <bits/stdc++.h>
using namespace std;
void mainCode(){
    int T;
    cin >> T;
    int arr[11];
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i = 4;i<11;i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
    for(int i = 0;i<T;i++){
        int tmp;
        cin >> tmp;
        cout << arr[tmp] << endl;
    }
}
int main(){
    mainCode();
}