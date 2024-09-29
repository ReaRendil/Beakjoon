import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		HashMap<String, Boolean> map = new HashMap<String, Boolean>();
		ArrayList<String> list = new ArrayList<String>();
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		for(int i = 0;i<N;i++) {
			String str = br.readLine();
			map.put(str, true);
		}int num = 0;
		for(int i = 0;i<M;i++) {
			String str = br.readLine();
			if(map.containsKey(str)) {
				num++;
				list.add(str);
			}
		}
		Collections.sort(list);
		bw.write(String.valueOf(num)+"\n");
		for(String i: list) {
			bw.write(i+"\n");
		}
		bw.flush();
	}

}
