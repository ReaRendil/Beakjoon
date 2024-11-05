#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int cmp (int* a,int* b){
    int x = *a, y = *b;
    if(abs(x)!=abs(y)) return abs(x) - abs(y);
    return y-x;
}
int* solution(int num[], size_t len, int n) {
    
    int* answer = (int*)malloc(sizeof(int)*len);
    for(int i = 0;i<len;i++){
        answer[i] = num[i] - n;
    }
    qsort(answer, len, sizeof(int),cmp);
    for(int i = 0;i<len;i++){
        answer[i]+=n;
    }
    return answer;
}