#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int Number [100] = {0};
    for(int i = 0;i<N;i++) scanf("%d",&Number[i]);
    int v;
    scanf("%d",&v);
    int sum = 0;
    for(int i = 0;i<N;i++){
        if(v==Number[i]) sum++;
    }
    printf("%d",sum);
    return 0;
}