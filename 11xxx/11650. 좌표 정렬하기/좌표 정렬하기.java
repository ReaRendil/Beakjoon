import java.util.Arrays;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int N = sc.nextInt();
		Pos[] posss = new Pos[N];
		for(int i=0;i<N;i++) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			posss[i] = new Pos(x, y);
		}
		Arrays.sort(posss);
		
		for(int i=0;i<N;i++) {
			System.out.println(posss[i].x+" "+posss[i].y);
		}
	}
}

class Pos implements Comparable<Pos> {
	int x, y;
	public Pos(int x, int y) {
		this.x=x;
		this.y=y;
	}
	
	public int compareTo(Pos o) {
		if(this.x==o.x) return this.y-o.y;
		return this.x-o.x;
	}
}