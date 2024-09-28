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
		for(int i = 0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			int n = Integer.parseInt(st.nextToken());
			int m = Integer.parseInt(st.nextToken());
			Queue<Integer> que = new LinkedList<Integer>();
			int key=0;
			int arr[] = new int[10];
			st = new StringTokenizer(br.readLine());
			for(int j = 0;j<n;j++) {
				int o = Integer.parseInt(st.nextToken());
				arr[o]++;
				if(j==m) {
					que.add(0);
					key=o;
				}else que.add(o);
			}
			int num = 1;
				for(int j = 9;;) {
					for(;arr[j]==0;) j--;
					if(que.peek()==j||que.peek()==0) {
						if(key==j&&que.peek()==0) {
							arr[j]--;
							bw.write(num+"\n");
							break;
						
						}else if(que.peek()==j) {
							que.poll();num++;
							arr[j]--;
						}else {
							que.add(que.poll());
						}
					}else {
						que.add(que.poll());
					}
				}
		}
		bw.flush();
	}

}
