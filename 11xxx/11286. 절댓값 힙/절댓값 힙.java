import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Collections;
import java.util.PriorityQueue;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		PriorityQueue<Integer> que_plus = new PriorityQueue<Integer>();
		PriorityQueue<Integer> que_minus = new PriorityQueue<Integer>(Collections.reverseOrder());
		for(int i = 0;i<N;i++) {
			int n = Integer.parseInt(br.readLine());
			if(n==0) {
				if(que_plus.isEmpty()&&que_minus.isEmpty()) {
					bw.write("0\n");
				}else {
					if(que_minus.isEmpty()) {
						bw.write(que_plus.poll()+"\n");
					}
					else if(que_plus.isEmpty()) {	
						bw.write(que_minus.poll()+"\n");
					}
					else if(Math.abs(que_plus.peek())>=Math.abs(que_minus.peek())) {
						bw.write(que_minus.poll()+"\n");
					}else {
						bw.write(que_plus.poll()+"\n");
					}
				}
			}else if(n>0){
				que_plus.add(n);
			}else {
				que_minus.add(n);
			}
		}
		bw.close();
	}

}
