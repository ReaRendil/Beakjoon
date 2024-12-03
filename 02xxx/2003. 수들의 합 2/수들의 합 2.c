#include <stdio.h>
#include <stdlib.h>


    int main(){
        int n,m;
        scanf("%d%d",&n,&m);
        int* sum = (int*)malloc(sizeof(int)*n);
        for(int i = 0;i<n;i++){
            scanf("%d",&sum[i]);
            if(!i==0){
                sum[i] +=sum[i-1];
            }
        }
        int count = 0;
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                if(i==0){
                    if(sum[j]==m) count++;
                }
                else{
                    if(sum[j]-sum[i-1]==m)
                    count++;
                }
            }
        }
        printf("%d",count);
}

