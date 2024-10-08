#include <stdio.h>
#include <string.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr [100][100] = {};

    for(int i = 0;i<N;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        for(int j = x;j<x+10;j++) for(int k = y;k<y+10;k++) arr[j-1][k-1] = 1;
    }int sum = 0;
    for(int i = 0;i<100;i++) for(int j = 0;j<100;j++) if(arr[i][j]) sum++;
    printf("%d",sum);
    return 0;
}