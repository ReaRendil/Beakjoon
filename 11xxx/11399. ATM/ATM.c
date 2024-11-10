#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);  
    int *arr = (int*)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int temp;
    for(int i = 0; i < N; i++) {
        for(int j = N - 1; j > 0; j--) {
            if(arr[j] < arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    int sum = 0;
    int weight = N;
    for(int i = 0; i < N; i++) {
        sum += arr[i] * weight;
        weight--;
    }
    printf("%d\n", sum);
    return 0;
}
