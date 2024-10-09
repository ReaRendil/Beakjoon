#include <stdio.h>
#include <stdlib.h> 
int main() {
	int N, M;
	scanf("%d%d", &N, &M);
	int size = N * M;
	int* arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		int n ;
		scanf("%d", &n);
		arr[i] = n;
	}
	for (int i = 0; i < size; i++) {
		int n;
		scanf("%d", &n);
		arr[i] += n;
	}
		
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
		if ((i+1) % M == 0) {
			printf("\n");
		}
	}
}