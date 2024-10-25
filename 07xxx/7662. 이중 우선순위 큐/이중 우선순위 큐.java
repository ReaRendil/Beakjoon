import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;
import java.util.TreeMap;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int T = Integer.parseInt(st.nextToken());
		for(int j = 0;j<T;j++) {
		int k = Integer.parseInt(br.readLine());
		TreeMap<Integer, Integer> t_map = new TreeMap<Integer, Integer>();
			for(int i = 0;i<k;i++) {
				st = new StringTokenizer(br.readLine());
				String input = st.nextToken();
				int number = Integer.parseInt(st.nextToken());
				if(input.equals("D")) {
					if(t_map.isEmpty())continue;
					int maxmin = 0;
					if(number==1) maxmin = t_map.lastKey();
					else maxmin = t_map.firstKey();
					if(t_map.put(maxmin,t_map.get(maxmin)-1)==1)//value값이 1일 경우 즉 1개 남은 경우 ==1 성립
                    {
						t_map.remove(maxmin);
					}
				}else {
					t_map.put(number, t_map.getOrDefault(number, 0)+1);
				}
			}
			if(t_map.isEmpty()) bw.write("EMPTY\n");
			else bw.write(t_map.lastKey()+" "+t_map.firstKey()+"\n");
		}
		bw.close();
	}

}
