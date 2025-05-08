#include <bits/stdc++.h>
using namespace std;
void mainCode(){
    int N; cin >> N;
    string grab_name[31];
    string grab_case[31];
    for(int i = 0;i<N;i++){
        cin >> grab_name[i] >> grab_case[i] ;
    }
    vector<pair<string, int>> sum;
    sum.push_back({grab_case[0],1});
    for(int i = 1;i<N;i++){
        for(int j = 0;j<sum.size();j++){
            if(sum[j].first == grab_case[i]){
                sum[j].second += 1;
                break;
            }
            if(j+1 == sum.size()){
                sum.push_back({grab_case[i],1});
                break;
            }
        }
    }
    int answer = sum[0].second + 1;
    for(int i = 1;i<sum.size();i++){
        answer*=sum[i].second + 1;
    }
    if(N==0){
        cout << "0\n";
    }else
    cout << answer-1 << "\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;cin >> N;
    for(int i = 0;i<N;i++)
    mainCode();
}