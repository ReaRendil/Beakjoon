#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N==1) printf("0");
    for(int i = 1;i<N;i++){
        int num = i;
        int sum = i;
        while(num){
            sum+=num%10;
            num/=10;
        }
        if(i==N-1){
            printf("0");
        }
        if(sum==N){
            printf("%d",i);
            break;
        }
    }
}