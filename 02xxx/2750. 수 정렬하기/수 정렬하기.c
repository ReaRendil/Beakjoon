#include <stdio.h>
#include <stdlib.h>
void bubbled_sort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr [j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(sizeof(int) * n);   
    for(int i = 0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        arr[i] = tmp;
    }
    bubbled_sort(arr,n);
    for(int i = 0;i<n;i++) printf("%d\n",arr[i]);
}