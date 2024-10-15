#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1000000);
    answer[0] = n;
    int i = 1;
    while(n!=1){
        if(n%2==0) n/=2;
        else n = n*3+1;
        answer[i] = n;
        i++;
}
    return answer;
}