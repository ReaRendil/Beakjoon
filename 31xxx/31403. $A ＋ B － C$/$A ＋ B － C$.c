#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    printf("%d\n",N+M-K);
    int m = M;
    int num = 1;
    for(;;){
        if(m>=10) {
            m/=10;
            num++;
        }else {
            break;
        }
    }
    for(int i = 0;i<num;i++){
        N*=10;
    }
    N = N+M;
    printf("%d",N-K);
    return 0;
}