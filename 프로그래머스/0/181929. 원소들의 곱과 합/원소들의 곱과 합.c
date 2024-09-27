#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int squ_sum = 0,mul_sum = 1;
    for(int i = 0;i<num_list_len;i++){
        squ_sum+=num_list[i];
        mul_sum*=num_list[i];
    }
    if(squ_sum*squ_sum>mul_sum) return 1;
    else return 0;
}