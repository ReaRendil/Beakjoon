import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	static int dx [] = {0,0,-1,1};
	static int dy [] = {-1,1,0,0};
	static int N;
	static void BFS(int visit[][],int x,int y,char Graph[][]) {
		Queue<int[]> que = new LinkedList<>();
		visit[x][y] = 1;
		char color = Graph[x][y];
		que.add(new int[] {x,y});
		while(!que.isEmpty()) {
			int tmp [] = que.poll();
			
			for(int i = 0;i<4;i++) {
				int nx = tmp[0] + dx[i];
				int ny = tmp[1] + dy[i];
				if(nx<0||ny<0||nx>=N||ny>=N||visit[nx][ny]!=0)continue;
				if(Graph[nx][ny] == color) {
					visit[nx][ny] = 1;
					que.add(new int [] {nx,ny});
				}
			}
		}
	}
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		char nomalGraph [][] = new char [N][N];
		char unusualGraph [][] = new char [N][N];
		int nomalVisit [][] = new int [N][N];
		int unusualVisit [][] = new int [N][N];
		for(int i = 0;i<N;i++) {
			String str = br.readLine();
			for(int j = 0;j<N;j++) {
			nomalGraph[i][j] = str.charAt(j);
			if(nomalGraph[i][j] == 'B') {
				unusualGraph[i][j] = 'B';
			}else {
				unusualGraph[i][j] = 'R';
			}
			}
		}
		int nomalNum = 0;
		int unusalNum = 0;
		for(int i = 0;i<N;i++) {
			for(int j = 0;j<N;j++) {
				if(nomalVisit[i][j]==0) {
					BFS(nomalVisit,i,j,nomalGraph);
					nomalNum++;
				}if(unusualVisit[i][j]==0) {
					BFS(unusualVisit,i,j,unusualGraph);
					unusalNum++;
				}
			}
		}
		bw.write(nomalNum+" "+unusalNum);
		bw.close();
	}

}
