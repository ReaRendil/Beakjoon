import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine());
		Stack <Integer> stack = new Stack<>();
		for(int i = 0;i<N;i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			String Command = st.nextToken();
			if(Command.equals("push")) {
				int tem = Integer.parseInt(st.nextToken());
				stack.push(tem);
			}else if(Command.equals("pop")) {
				if(stack.isEmpty()) bw.write("-1\n");
				else bw.write(stack.pop()+"\n");
			}else if(Command.equals("size")) {
				bw.write(stack.size()+"\n");
			}else if(Command.equals("empty")) {
				if(stack.isEmpty()) bw.write("1\n");
				else bw.write("0\n");
			}else if(Command.equals("top")) {
				if(stack.isEmpty()) bw.write("-1\n");
				else bw.write(stack.peek()+"\n");
			}
		}bw.flush();
	}

}
