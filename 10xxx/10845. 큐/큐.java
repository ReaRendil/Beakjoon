import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		Queue<Integer> que = new LinkedList<Integer>();
		int n=0;
		for(int i = 0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			String str = st.nextToken();
			if(str.equals("push")) {
				n = Integer.parseInt(st.nextToken());
				que.add(n);
			}else if(str.equals("pop")) {
				if(que.isEmpty()) bw.write("-1\n");
				else bw.write(que.poll()+"\n");
			}else if(str.equals("size")) {
				bw.write(que.size()+"\n");
			}else if(str.equals("empty")) {
				if(que.isEmpty()) bw.write("1\n");
				else bw.write("0\n");
			}else if(str.equals("front")) {
				if(que.isEmpty()) bw.write("-1\n");
				else bw.write(que.peek()+"\n");
			}else if(str.equals("back")) {
				if(que.isEmpty()) bw.write("-1\n");
				else bw.write(n+"\n");
			}
			
		}
		bw.flush();
	}

}
