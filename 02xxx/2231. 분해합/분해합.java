import java.util.Scanner;
public class Main {

	static int Count (int i,int N) {
		String str = Integer.toString(i);
		int num=0;
		for(int j =0;j<str.length();j++) {
			num+=str.charAt(j)-'0';
			
		}
		num+=i;
		if(num==N) {
			System.out.println(i);
			return 1;
		}
		else {
			return 0;
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		int N =sc.nextInt();
		int a=0;
        if(N==1)System.out.println(0);
		for(int i =1;i<N;i++) {
			a=Count(i,N);
			if(a==1)break;
			if(i==N-1) {
				System.out.println(0);
			}
            
		}
	}

}
