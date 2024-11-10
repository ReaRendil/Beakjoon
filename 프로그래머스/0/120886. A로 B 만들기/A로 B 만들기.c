#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int cmp (char* a,char * b){
    return *a-*b;
}
int solution(const char* before, const char* after) {
    int n = strlen(before);
    char* b_arr = (char*)malloc(sizeof(char)*n+1);
    char* a_arr = (char*)malloc(sizeof(char)*n+1);
    strcpy(a_arr,after);
    strcpy(b_arr,before);
    qsort(b_arr,n,sizeof(char),cmp);
    qsort(a_arr,n,sizeof(char),cmp);
    if(strcmp(b_arr,a_arr)==0){
        return 1;
    }
    return 0;
}