import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	static class Node{
		int node, edge;
		Node(int node, int edge){
			this.node = node;
			this.edge = edge;
		}
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		PriorityQueue<Node> queue = new PriorityQueue<>(Comparator.comparingInt(p->p.edge));;
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(br.readLine());
		int answer[] = new int[N+1];
		for(int i = 0;i<answer.length;i++) answer[i] = 1000000000;
		List<Node>[] graph = new ArrayList[N+1];
		for(int i = 1;i<=N;i++) graph[i] = new ArrayList<>();
		for(int i = 0;i<M;i++) {
			st = new StringTokenizer(br.readLine());
			int s = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			int w = Integer.parseInt(st.nextToken());
			graph[s].add(new Node(e, w));
		}
		st = new StringTokenizer(br.readLine());
		int startCity = Integer.parseInt(st.nextToken());
		int endCity = Integer.parseInt(st.nextToken());
		queue.add(new Node(startCity, 0));
		while(!queue.isEmpty()) {
			Node t = queue.poll();
			if(answer[t.node] < t.edge)continue;
			for(Node nextNode : graph[t.node]) {
				if(answer[nextNode.node] > t.edge + nextNode.edge) {
					answer[nextNode.node] = t.edge + nextNode.edge;
					queue.add(new Node(nextNode.node, answer[nextNode.node]));
					
				}
			}
		}
		bw.write(String.valueOf(answer[endCity]));
		bw.close();
		
	}

}
