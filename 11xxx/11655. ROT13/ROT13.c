#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str [101] ;
    scanf("%[^\n]s",str);
    for(int i = 0;i<strlen(str);i++){
        if(isalpha(str[i])){
            if((str[i]>77&&str[i]<=90)||str[i]>109){
                str[i] = str[i]-13;
            }else{
                str[i] +=13;
            }
        }
    }
    puts(str);
    
}