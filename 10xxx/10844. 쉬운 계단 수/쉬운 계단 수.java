import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int dp [][] = new int [10][N];
		int sum = 0;
		for(int i = 1;i<10;i++) {
			dp[i][0] = 1;
		}
		for(int i = 1;i<N;i++) {
			for(int j = 0;j<10;j++) {
				if(j==0) {
					dp[j+1][i] += dp[j][i-1];
					if(dp[j+1][i]>1000000000) dp[j+1][i]%=1000000000;
				}else if(j==9) {
					dp[j-1][i] += dp[j][i-1];
					if(dp[j-1][i]>1000000000) dp[j-1][i]%=1000000000;
				}else {
					dp[j-1][i] += dp[j][i-1];
					dp[j+1][i] += dp[j][i-1];
					if(dp[j-1][i]>1000000000) dp[j-1][i]%=1000000000;
					if(dp[j+1][i]>1000000000) dp[j+1][i]%=1000000000;
					
				}
				
			}
		}
		for(int i = 0;i<10;i++) {
			sum+=dp[i][N-1];
			if(sum>1000000000) {
				sum%=1000000000;
			}
		}
		bw.write(String.valueOf(sum));
		bw.flush();
	}

}
