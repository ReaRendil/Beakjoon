#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int *basket;
    basket = (int *)malloc((N+1) * sizeof(int));
    for(int i = 1;i<N+1;i++) basket[i] = 0;
    for(int i = 0;i<M;i++){
        int I,j,k;
        scanf("%d%d%d",&I,&j,&k);
        for(;I<=j;I++) basket[I] = k;
    }
    for(int i = 1;i<N+1;i++){
        printf("%d ",basket[i]);
    }
    return 0;
}