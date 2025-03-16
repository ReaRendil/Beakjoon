#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void mainCode(){
    int T;
    cin >> T;
    for(int t = 0;t<T;t++){
        int N,M,K;
        int sum = 0;
        cin >> N >> M >> K;
        int cabbageField[N][M];
        vector<int> graph[N][M];
        bool visited [N][M];
        for(int i = 0;i<N;i++) for(int j = 0;j<M;j++) {cabbageField[i][j] = 0; visited[i][j] = false;}
        for(int i = 0;i<K;i++){
            int x, y;
            cin >> x >> y;
            cabbageField[x][y] = 1;
        }
        queue<pair<int,int> > que;
        for(int i= 0;i<N;i++){
            for(int j = 0;j<M;j++){
                if(!visited[i][j]){
                    visited[i][j] = true;
                    if(!cabbageField[i][j]==0){
                        que.push(make_pair(i,j));
                        while(!que.empty()){
                            
                            int x = que.front().first;
                            int y = que.front().second;

                            que.pop();
                            for(int k = 0;k<4;k++){
                                int nx = x + dx[k];
                                int ny = y + dy[k];
                                if((0<=nx&&nx<N) && (0<=ny && ny < M) && !visited[nx][ny] && cabbageField[nx][ny] == 1){
                                    visited[nx][ny] = true;
                                    que.push(make_pair(nx,ny));

                                }
                            }
                        }
                        sum++;
                    }
                }
            }
        }
        cout << sum << endl;    
    }
    

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}