#include <stdio.h>
int main() {
    int N; 
    scanf("%d",&N);
    for(;;){
        if(N==1)break;
        for(int i = 2;;i++){
            if(N%i==0){
                N/=i;
                printf("%d\n",i);
                break;
            }
        }
    }
}