import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	static int [] arr;
	static long div (long K,long max) {
		int sum = 0;
		for(int i = 0;i<K;i++) sum+=arr[i]/max;
		return sum ;
	}
	static long Binary_Search(long start,long end,long key,long K) {
		long mid=0;
		while(start+1<end) {
			mid = (start+end)/2;
			
			if(key <= div(K, mid)) {
				start = mid;
			}else {
				end = mid;
			}
		}
		mid = (start+end)/2;
		return mid;
	}
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int K = Integer.parseInt(st.nextToken());
		int N = Integer.parseInt(st.nextToken());
		arr =new int [K];
		int sum = 0; long max = 0;
		for(int i = 0;i<K;i++) {
			arr[i] = Integer.parseInt(br.readLine());
			sum+=arr[i];
		}
		Arrays.sort(arr);
		max = arr[K-1];
		bw.write(String.valueOf(Binary_Search(1, max+1, N,K)));
		bw.flush();
		
	}

}
