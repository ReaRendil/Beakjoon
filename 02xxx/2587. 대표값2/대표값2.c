#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5];
    int tmp = 0;
    scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    int sum = 0;
    for(int i=0;i<5;i++) sum+=arr[i];
    sum/=5;
    for(int i=4;i>0;i--)for(int j = 0;j<i;j++){
        if(arr[j+1]>arr[j]){
            tmp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = tmp;
        }
    }
    printf("%d\n%d",sum,arr[2]);
    return 0;
}