#include <stdio.h>
#include <stdlib.h>
void divisor_sum (int n){
    int *divisor_save;
    int number = 0;
    int sum = 0;
    divisor_save = (int *)malloc(n * sizeof(int));
    for(int i = 1;i<n;i++){
        if(n%i==0){
            divisor_save[number]=i; number++;
        }
    }
    for(int i = 0;i<number;i++)sum+=divisor_save[i];
    if(sum==n){
        printf("%d = %d",n,1);
        for(int i = 1;i<number;i++) printf(" + %d",divisor_save[i]);
    }else printf("%d is NOT perfect.",n);
}
int main(){
    for(;;){
        int n;
        scanf("%d",&n);
        if(n==-1) break;
        divisor_sum(n);
        printf("\n");
    }
}