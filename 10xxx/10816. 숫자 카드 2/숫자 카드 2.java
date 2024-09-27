import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw =new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		st = new StringTokenizer(br.readLine());
		HashMap<Integer,Integer> map = new HashMap<>();
		for(int i = 0;i<N;i++) {
			int n = Integer.parseInt(st.nextToken());
			if(map.containsKey(n)) {
				map.put(n, map.get(n)+1); 
			}else {
				map.put(n, 1);
			}
		}
		int M = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine());
		for(int i = 0;i<M;i++) {
			int n = Integer.parseInt(st.nextToken());
			if(map.containsKey(n)) {
				bw.write(map.get(n)+" ");
			}
			else {
				bw.write(0+" ");
			}
		}bw.flush();
	}

}
