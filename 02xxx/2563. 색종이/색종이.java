import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		boolean paper [] [] =  new boolean [100][100];
		int n = sc.nextInt();
		for(int i = 0;i<n;i++) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			
			for(int X =x;X< x+10;X++) {
				for(int Y = y;Y<y+10;Y++) {
					paper [X-1][Y-1] = true;
				}
			}
			
		}
		int num = 0;
		for(int i = 0;i<100;i++) {
			for(int j = 0;j<100;j++) {
				if(paper[i][j]==true) {
					num++;
				}
			}
		}
		System.out.println(num);
	}

}
