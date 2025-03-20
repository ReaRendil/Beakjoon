#include <bits/stdc++.h>
using namespace std;

int MAX = 0;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void repeat(int sum, int x, int y, int count, vector<vector<int>>& paper, int prevDir) {
    if (count == 4) {
        MAX = max(MAX, sum);
        return;
    }
    if (prevDir == 0) ; 
    else if (prevDir % 2 == 0) prevDir--;
    else prevDir++;
    prevDir--;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 경계 검사 및
        if (nx >= 0 && nx < paper.size() && ny >= 0 && ny < paper[0].size() && i != prevDir) {
            repeat(sum + paper[nx][ny], nx, ny, count + 1, paper, i+1);
            if(count==2){
                for(int k = 0;k<4;k++){
                    int nxNew = x + dx[k];
                    int nyNew = y + dy[k];
                    if (nxNew >= 0 && nxNew < paper.size() && nyNew >= 0 && nyNew < paper[0].size() && k != prevDir&&i != k){
                        int newSum = sum+ paper[nxNew][nyNew] + paper[nx][ny];
                        MAX = max(MAX, newSum);
                    }
                }
            }
        }
    }
}

void mainCode() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> paper(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> paper[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            repeat(paper[i][j], i, j, 1, paper, 0);
        }
    }

    cout << MAX << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}
