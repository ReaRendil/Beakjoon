import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	static int mathMax(int a,int b) {
		if(a>b) return a;
		else return b;
	}
	static int mathMin(int a, int b) {
		if(a<b) return a;
		return b;
	}

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st =new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int maxDp [] = new int [3];
		int minDp [] = new int [3];
		int maxArr [] = new int [3];
		int minArr [] = new int [3]; 
		for(int i = 0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			for(int j = 0;j<3;j++) {
				maxDp[j] = maxArr[j];
				minDp[j] = minArr[j];
				
			}
			for(int j = 0;j<3;j++) {
				maxArr[j] = Integer.parseInt(st.nextToken());
				minArr[j] = maxArr[j];
			}
			maxArr[0] += mathMax(maxDp[0], maxDp[1]);
			maxArr[1]+=mathMax(maxDp[1], mathMax(maxDp[2], maxDp[0]));
			maxArr[2]+=mathMax(maxDp[2], maxDp[1]);
			minArr[0]+=mathMin(minDp[0], minDp[1]);
			minArr[1]+=mathMin(mathMin(minDp[2], minDp[0]),minDp[1]);
			minArr[2]+=mathMin(minDp[2], minDp[1]);
		}
		int max = mathMax(maxArr[1], mathMax(maxArr[2], maxArr[0]));
		int min = mathMin(minArr[1], mathMin(minArr[2], minArr[0]));
		bw.write(max + " "+ min);
		bw.close();
	}

}
