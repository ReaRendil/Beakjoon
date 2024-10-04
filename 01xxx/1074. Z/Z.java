import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
	
	static int Recursion (int leng,int lengr,int lengc,int r,int c,int sum) {
		leng/=2;
		if(leng==0) return sum;
		if(r>lengr-leng&&c>lengc-leng) {
			sum += leng*leng*3;
			return Recursion(leng, lengr, lengc, r, c,sum);
		}else if(r>lengr-leng&&c<=lengc-leng) {
			sum += leng*leng*1;
			return Recursion(leng, lengr, lengc-leng, r, c,sum);
		}else if(c>lengc-leng&&r<=lengr-leng) {
			sum += leng*leng*2;
			return Recursion(leng, lengr-leng, lengc, r, c,sum);
		}else if(c<=lengc-leng&&r<=lengr-leng){
			sum += 0;
			return Recursion(leng, lengr-leng, lengc-leng, r, c,sum);
		}else {
			return sum;
		}
	}
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int r = Integer.parseInt(st.nextToken());
		int c = Integer.parseInt(st.nextToken());
		int leng = (int)Math.pow(2, N);
		int sum = Recursion(leng, leng, leng, c+1, r+1, 0);
		System.out.println(sum);
	}

}
