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
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		PriorityQueue<Node> pque = new PriorityQueue<>(Comparator.comparingInt(p->p.edge));
		int V =Integer.parseInt(st.nextToken());
		int E =Integer.parseInt(st.nextToken());
		int K =Integer.parseInt(br.readLine());
		List<Node>[] graph = new ArrayList[V+1];
		int[] answer = new int[V + 1];
		for(int i = 1;i<=V;i++) answer[i] = 1000000;
		answer[K] = 0;
		for(int i = 1;i<=V;i++) graph[i] = new ArrayList<Main.Node>();
		for(int i = 0;i<E;i++) {
			st = new StringTokenizer(br.readLine());
				int u =Integer.parseInt(st.nextToken());
				int v =Integer.parseInt(st.nextToken());
				int w =Integer.parseInt(st.nextToken());
				graph[u].add(new Node(v, w));
			
			
		}
		pque.add(new Node(K, 0));
		while(!pque.isEmpty()) {
			Node g = pque.poll();
			if(answer[g.node] < g.edge) continue;
			for(Node nextNode : graph[g.node]) {
				if(answer[nextNode.node] > g.edge + nextNode.edge) {
					answer[nextNode.node] = g.edge + nextNode.edge;
					pque.add(new Node(nextNode.node, answer[nextNode.node]) );
				}
			}
		}
		
		for (int i = 1; i <= V; i++){
            if (answer[i] == 1000000) bw.write("INF\n");
            else bw.write(answer[i]+"\n");
        }
		br.close();
		bw.close();
	}

}
