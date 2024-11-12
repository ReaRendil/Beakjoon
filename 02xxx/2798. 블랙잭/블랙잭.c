#include <stdio.h>
#include <stdlib.h>
    int main(){
        int n,m,max = 0;
        scanf("%d%d",&n,&m);
        int card[100] = {0};
        for(int i = 0;i<n;i++){
            scanf("%d",&card[i]);
        }
        for(int i = 0;i<n-2;i++){
            for(int j = i+1;j<n-1;j++){
                for(int k = j+1;k<n;k++){
                    int tmp = card[i]+card[j]+card[k];
                    if(tmp<=m&&tmp>=max) {
                        max = tmp;
                    }
                }
            }
        }
        printf("%d",max);
}

