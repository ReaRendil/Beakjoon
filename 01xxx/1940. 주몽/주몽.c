#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int N,M;
    scanf("%d%d",&N,&M);
    int* armor = (int*)malloc(sizeof(int)*N);
    for(int i = 0;i<N;i++){
        scanf("%d",&armor[i]);
    }
    int num = 0;
    for(int i = 0;i<N+1;i++){
        for(int j = i+1;j<N;j++){
            if(armor[i]+armor[j]==M){
                num++;
                armor[i] = M+1;
                armor[j] = M+1;
            }
        }
    }
    printf("%d",num);
}