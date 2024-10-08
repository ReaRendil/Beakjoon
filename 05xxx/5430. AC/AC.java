import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Deque;
import java.util.LinkedList;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int T = Integer.parseInt(st.nextToken());
		for(int i = 0;i<T;i++) {
			String P = br.readLine();
			int N = Integer.parseInt(br.readLine());
			String arr = br.readLine();
			Boolean tf = true;
			Deque<Integer> deq = new LinkedList<Integer>();
			st = new StringTokenizer(arr,",[]");
			for(int j = 0;j<N;j++) {
				deq.add(Integer.parseInt(st.nextToken()));
			}
			boolean error = false;
			for(int j = 0;j<P.length();j++) {
				char c = P.charAt(j);
				if(c=='R') {
					if(tf) tf = false;
					else tf = true;
				}else {
					if(deq.isEmpty()) {
						error = true;
						break;
					}
					if(tf)deq.poll();
					else deq.pollLast();
				}
			}
			if(error) bw.write("error\n");
			else {
				bw.write("[");
				if(tf) {
					for(int j = 1;j<deq.size();) {
						bw.write(deq.poll()+",");
					}if(deq.size()==1)
					bw.write(String.valueOf(deq.poll()));
				}else {
					for(int j = 1;j<deq.size();) {
						bw.write(deq.pollLast()+",");
					}if(deq.size()==1)
					bw.write(String.valueOf(deq.poll()));
				}
				bw.write("]\n");
				
			}
		}
		br.close();
		bw.close();
	}

}
