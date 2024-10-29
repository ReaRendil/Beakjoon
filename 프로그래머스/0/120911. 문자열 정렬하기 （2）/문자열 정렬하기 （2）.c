#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int cmp (char* a, char* b){
    return *a - *b;
}
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
        int n = strlen(my_string);
    char* answer = (char*)malloc(n+1);
    strcpy(answer, my_string);
    for(int i = 0;i<n;i++){
        if(isupper(answer[i]))
        answer[i] = tolower(answer[i]);
    }
    qsort(answer, n, sizeof(char), cmp);
    return answer;
}