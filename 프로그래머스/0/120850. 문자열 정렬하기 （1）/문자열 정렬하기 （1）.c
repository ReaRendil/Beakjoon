#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include<string.h>
int* solution(const char* my_string) {
    int* answer = (int*)malloc(sizeof(int)*strlen(my_string)+1);
    int n = 0;
    for(int i = 0;i<strlen(my_string);i++){
        if(!isalpha(my_string[i])){
            answer[n] = my_string[i]-'0';
            n++;
        }
    }
    for(int i = n-1;i>0;i--)for(int j = 0;j<i;j++){
        if(answer[j]>answer[j+1]){
            int tmp = answer[j];
            answer[j] = answer[j+1];
            answer[j+1] = tmp;
        }
    }
    return answer;
}