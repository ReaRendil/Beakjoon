import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		int Num [] = new int [N];
		for(int i = 0;i<N;i++) Num[i] = Integer.parseInt(br.readLine());
		if(N==0)bw.write("0");
		else {
		Arrays.sort(Num);
		double dev =N*0.15;
		int d=(int)Math.round(dev);
		double sum = 0;
		for(int i = d;i<N-d;i++) sum+=Num[i];
		sum/=(N-d*2);
		d = (int)Math.round(sum);
		bw.write(String.valueOf(d));
		}
		bw.flush();
		
	}

}
