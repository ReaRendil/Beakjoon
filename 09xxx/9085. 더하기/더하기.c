#include <stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int i = 0;i<T;i++){
        int N;
        scanf("%d",&N);
        int sum = 0;
        for(int j = 0;j<N;j++){
            int n;
            scanf("%d",&n);
            sum+=n;
        }
        printf("%d\n",sum);
    }
    
}