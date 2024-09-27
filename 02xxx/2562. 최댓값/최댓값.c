#include <stdio.h>
 
int main()
{
    int N,M,num=1;
    scanf("%d",&N);
    int max = N;
    for(int i = 2 ; i<10;i++){
        scanf("%d",&M);
        if(M>max){
            num = i;
            max = M;
        }
    }
    printf("%d\n%d",max,num);
    return 0;
}