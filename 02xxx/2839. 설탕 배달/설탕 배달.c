#include <stdio.h>
#include <stdlib.h>
    int main(){
        int N;
        scanf("%d",&N);
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
        printf("%d",num);
}

