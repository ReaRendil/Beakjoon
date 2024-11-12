import java.util.Scanner;

public class Main {

	static void add(int N, int M, int arr[]) {
		int sum; int max = 0;
		for(int i = 0;i<N-2;i++) {
			for(int j=i+1;j<N-1;j++) {
				for(int k=j+1;k<N;k++) {
					sum=arr[i]+arr[j]+arr[k];
					if(M>=sum&&sum>=max) {
						max=sum;
					}
				}
			}
		}
		System.out.println(max);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int M = sc.nextInt();
		int [] arr = new int[N];
		for(int i = 0;i<N;i++) {
			int num = sc.nextInt();
			arr [i]=num;
		}
		add(N, M, arr);
	}

}
