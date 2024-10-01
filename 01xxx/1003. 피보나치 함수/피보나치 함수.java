import java.util.*;

import java.lang.*;

import java.io.*;

// The main method must be in a class named "Main".

class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int dp [][] = new int [2][41];

        dp[0][0] = 1; dp[1][0] = 0;

        dp[0][1] = 0; dp[1][1] = 1;

        for(int i = 2;i<41;i++){

            for(int j = 0;j<2;j++){

                dp[j][i]=dp[j][i-1]+dp[j][i-2];

            }

        }

        int N = sc.nextInt();

        for(int i = 0;i<N;i++){

            int n = sc.nextInt();

            System.out.println(dp[0][n]+" "+dp[1][n]);

        }

    }

}