#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*num_list_len);
    for(int i = 0;i<num_list_len;i++){
        if(n==num_list_len) n=0;
        answer[i] =  num_list[n];
        n++;
    }
    return answer;
}