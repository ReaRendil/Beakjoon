import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		HashMap<String, String> map = new HashMap<>();
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		for(int i = 0;i<N;i++) {
			st = new StringTokenizer(br.readLine());
			String id = st.nextToken();
			String pw = st.nextToken();
			map.put(id, pw);
		}
		for(int i = 0;i<M;i++) {
			String id = br.readLine();
			bw.write(map.get(id)+"\n");
		}
		bw.flush();
	}

}
