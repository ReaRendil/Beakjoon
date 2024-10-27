import java.util.Arrays;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int N = sc.nextInt();
		PosLi[] posss = new PosLi[N];
		for(int i=0;i<N;i++) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			posss[i] = new PosLi(x, y);
		}
		LinkedList<PosLi> list = new LinkedList<>(Arrays.asList(posss));		
		list.sort(new Comparator<PosLi>() {
		public int compare(PosLi o1, PosLi o2) {
				if(o1.y==o2.y) return o1.x-o2.x;
			return o1.y-o2.y;
		}
		});
		
		for (PosLi pos : list) {
            System.out.println(pos.x + " " + pos.y);
        }
		
	}
}
class PosLi {
	int x, y;
	public PosLi(int x, int y) {
		this.x=x;
		this.y=y;
	}
	
}