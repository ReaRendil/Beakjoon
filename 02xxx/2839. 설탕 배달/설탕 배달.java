
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int sum = (N%5);
		int num = N/5;
		for(;;) {
			if(N==3) {
				num = 1;
				break;
			}
			if(5>N||sum>N) {
				num = -1;
				
				break;
			}
			if(sum%3==0) {
				num +=sum/3;
				break;
			}else {
				sum+=5;
				num--;
			}
			
			
		}
		System.out.println(num);
	}

}
