import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int v;
		int i = sc.nextInt();
		int [] N =new int[i];
		for(int n =0;n<i;n++) {
			v = sc.nextInt();
			N[n]=v;	
		}
		int [] Count = new int[500];
		for(int a=0;a<i;a++) {
			Count[N[a]+100]++;
		}
		int C = sc.nextInt();
		C=C+100;
		System.out.print(Count[C]);
	}

}

