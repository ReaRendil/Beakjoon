#include <stdio.h>
#include <stdlib.h>


    int main(){
        int arr [42] ={0};
        for(int i = 0;i<10;i++){
            int n;
            scanf("%d",&n);
            arr[n%42]++;
        }int num = 0;
        for(int i = 0;i<42;i++) if(arr[i]>0) num++;
        printf("%d",num);
}


