#include <stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int i = 0;i<T;i++){
        int H,W,N;
        scanf("%d%d%d",&H,&W,&N);
        int f_num = N;
        for(;;){
            if(f_num>H) f_num-=H;
            else break;
        }
        int sum = f_num*100+(N/H)+1;
        if(N%H==0) sum--;
        printf("%d\n",sum);
    }
}