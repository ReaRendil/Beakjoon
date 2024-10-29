#include <stdio.h>
#include <stdlib.h>
int cmp(int* a, int* b){
    return *a-*b;
}
int main() {
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(sizeof(int) * n);   
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),cmp);
    for(int i =0;i<n;i++)printf("%d\n",arr[i]);
}