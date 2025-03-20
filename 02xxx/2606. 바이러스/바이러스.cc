#include <bits/stdc++.h>
using namespace std;
void mainCode() {
    int N,M;
    cin >> N >> M;
    bool visited [N+1];
    vector<int> graph[N+1];
    queue<int> que;
    for(int i = 0;i<N+1;i++) visited[i] = false;
    for(int i = 0;i<M;i++){
        int x,y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    que.push(1);
    visited[1] = true;


while (!que.empty())
    {
        int x = que.front();
        que.pop();
        for(int i = 0;i<graph[x].size();i++){
            int y = graph[x][i];
            if(!visited[y]){
                que.push(y);
                visited[y] = true;
            }
        }
    }
    int sum = 0;
    for(int i = 1;i<N+1;i++){
        if(visited[i]){
            sum++;
        }
    }
    cout << sum-1 << endl;
    

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}
