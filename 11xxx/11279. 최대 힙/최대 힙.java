import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Collection;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		PriorityQueue<Integer> prique = new PriorityQueue<Integer>(Collections.reverseOrder());
		for(int i = 0;i<N;i++) {
			int n = Integer.parseInt(br.readLine());
			if(n==0) {
				if(prique.isEmpty()) {
					bw.write("0\n");
				}else {
					bw.write(prique.poll()+"\n");
				}
			}else {
				prique.add(n);
			}
		}
		bw.close();
	}

}
