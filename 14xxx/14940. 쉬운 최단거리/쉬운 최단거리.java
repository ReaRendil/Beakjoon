import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int[][] arr = new int[n][m];
        boolean[][] visit = new boolean[n][m];
        Queue<Node> queue = new LinkedList<>();
                Node startNode = null;
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < m; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
                if (arr[i][j] == 2) {
                    startNode = new Node(i, j);
                    arr[i][j] = 0; 
                } else if (arr[i][j] == 1) {
                    arr[i][j] = -1; 
                }else {
                	arr[i][j] = -2;
                }
            }
        }

        // BFS
        queue.add(startNode);
        visit[startNode.x][startNode.y] = true;

        // 방향 벡터 (상, 하, 좌, 우)
        int[] dx = {-1, 1, 0, 0};
        int[] dy = {0, 0, -1, 1};

        while (!queue.isEmpty()) {
            Node current = queue.poll();

            for (int i = 0; i < 4; i++) {
                int nx = current.x + dx[i];
                int ny = current.y + dy[i];

                // 범위를 벗어나지 않고, 방문하지 않았으며 갈 수 있는 곳이라면
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visit[nx][ny] && arr[nx][ny] == -1) {
                    queue.add(new Node(nx, ny));
                    arr[nx][ny] = arr[current.x][current.y] + 1;
                    visit[nx][ny] = true;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == -1) {
                    bw.write("-1 ");
                } else if(arr[i][j]==-2){
                	bw.write("0 ");
                }
                else {
                
                    bw.write(arr[i][j] + " ");
                }
            }
            bw.write("\n");
        }
        bw.flush();
        bw.close();
    }
}

class Node {
    int x, y;

    public Node(int x, int y) {
        this.x = x;
        this.y = y;
    }
}
