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
		StringTokenizer st =new StringTokenizer(br.readLine());
		Queue<int []> que = new LinkedList<>();
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		int[] dx = {0,0,-1,1};
		int[] dy = {-1,1,0,0};
		int  borad [][] = new int [N][M];
		int  visit [][] = new int [N][M];
		for(int j = 0;j<M;j++) {
			st = new StringTokenizer(br.readLine()); 
			for(int i = 0;i<N;i++) {
				borad[i][j] = Integer.parseInt(st.nextToken());
				if(borad[i][j]==1) {
					que.add(new int[]{i,j});
					visit[i][j] = 1;
				}else if(borad[i][j]==-1) {
					visit[i][j] = 1;
				}
			}
		}
		while(!que.isEmpty()) {
			int [] tmp = que.poll();
			
			for(int i = 0;i<4;i++) {
				int x = tmp[0] + dx[i];
				int y = tmp[1] + dy[i];
				if(x<0||y<0||x>=N||y>=M)continue;
				if(visit[x][y]!=0) continue;
				visit[x][y] = visit[tmp[0]][tmp[1]]+1;
				que.add(new int [] {x,y});
			}
		}int max = 0;
		int min = 0;
		for(int i = 0;i<N;i++) {
			for(int j = 0;j<M;j++) {
				if(visit[i][j]==0) {
					min = -1;
					break;
				}
				if(visit[i][j]>=max) {
					max = visit[i][j];
				}
			}
		}
		if(min == -1) {
			bw.write("-1");
		}else {
			bw.write(String.valueOf(max-1));
		}
		bw.close();
		
	}

}
