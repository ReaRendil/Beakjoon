#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    if(strcmp(my_string+(strlen(my_string)-strlen(is_suffix)),is_suffix)==0) return 1 ;
    else return 0;
}