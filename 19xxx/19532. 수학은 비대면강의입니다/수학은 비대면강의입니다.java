

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int d = sc.nextInt();
		int e = sc.nextInt();
		int f = sc.nextInt();
		int x = 0,y = 0;
		for( x = -999;;x++) {
			if((c-a*x)*e==(f-d*x)*b) {
				break;
			}
		}
		for( y = -999;;y++) {
			if((c-b*y)*d==(f-e*y)*a) {
				break;
			}
		}
		System.out.println(x+" "+y);
	}

}
