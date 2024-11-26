#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char change (char a){
    if(a<=67){
        return a-3+26;
    }else{
        return a-3;
    }
}
int main() {
    char alp [1001];
    scanf("%s",alp);
    for(int i = 0;i<strlen(alp);i++){
        alp[i] = change(alp[i]);
    }
    printf("%s",alp);
}