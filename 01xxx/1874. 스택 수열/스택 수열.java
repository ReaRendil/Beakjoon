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
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		char arr [] = new char [N*2];
		int a = 0;
		Stack<Integer> stack = new Stack<Integer>();
		int num [] = new int [N];
		for(int i = 0;i<N;i++) num[i] = Integer.parseInt(br.readLine());
		int n = 0;
		for(int i = 1;i<=N;i++) {
			stack.add(i);
			arr[a] = '+';a++;
			if(stack.peek()==num[n]) {
				for(;;) {
					stack.pop();
					arr[a] = '-';a++;
					n++;
					if(stack.isEmpty()||stack.peek()!=num[n]) break;
				}
			}
		}
		if(n==N)for(int i = 0;i<arr.length;i++) {
			System.out.println(arr[i]);
		}
		else System.out.println("NO");
	}

}
