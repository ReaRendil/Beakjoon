import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		int [] number = new int [N];
		int [] arr = new int [10000];
		double sum = 0;
		for(int i = 0;i<N;i++) {
			number[i] = Integer.parseInt(br.readLine());
			sum+=number[i];
			arr[4000+number[i]]++;
		}
		int max = arr[0];
		for(int i = 0;i<arr.length;i++) {
			if(max<arr[i]) max = arr[i];
		}
		ArrayList<Integer> mode = new ArrayList<Integer>();
		int n = 0;
		for(int i = 0;i<arr.length;i++) {
			if(arr[i]==max) {mode.add(i-4000); n++;}
		}
		sum/=N;sum = Math.round(sum);
		Arrays.sort(number);
		bw.write((int)sum+"\n");
		bw.write(number[N/2]+"\n");
		if(n==1) bw.write(mode.get(0)+"\n");
		else bw.write(mode.get(1)+"\n");
		if(N==1) {
			bw.write("0\n");
		}
		else bw.write(String.valueOf(number[N-1]-number[0]));
		bw.flush();
	}
}
