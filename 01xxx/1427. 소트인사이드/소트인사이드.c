#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}
int main()
{
    int n;
    scanf("%d",&n);
    int num = 0;
    for(int i = 10;;i*=10){
        num++;
        if(!(n/i)){
            break;
        }
    }
    int* arr = (int*)malloc(sizeof(int)*num+1);
    for(int i = 0;i<num;i++) {
        arr[i] = n%10; n/=10;
    }
    qsort(arr,num,4,compare);
    for(int i = 0;i<num;i++) printf("%d",arr[i]);
    return 0;
}