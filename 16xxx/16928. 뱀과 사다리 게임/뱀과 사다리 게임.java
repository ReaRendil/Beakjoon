import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		HashMap<Integer, Integer> trap = new HashMap<Integer, Integer>();
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		for(int i = 0;i<N+M;i++) {
			st = new StringTokenizer(br.readLine());
			int n = Integer.parseInt(st.nextToken());
			int m = Integer.parseInt(st.nextToken());
			trap.put(n, m);
		}
		int dp [] = new int [200];
		for(int i = 0;i<101;i++) dp[i] = 100;
		dp[1] = 0;
		for(int k = 0;k<2;k++)
		for(int i = 1;i<100;i++) {
			for(int j = 1;j<=6;j++) {
				if(dp[i+j]==0) continue;
				if(trap.containsKey(i+j)) {
					if(dp[trap.get(i+j)]>dp[i]+1) dp[trap.get(i+j)]=dp[i]+1;
				}else {
					if(dp[i+j]>dp[i]+1) dp[i+j] = dp[i]+1;

				}				
			}
		}

		bw.write(String.valueOf(dp[100]));
		bw.close();
	
	}

}
