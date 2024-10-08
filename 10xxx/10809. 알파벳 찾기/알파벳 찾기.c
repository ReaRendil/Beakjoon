#include <stdio.h>
#include <string.h>
int main(){
    int count [26];
    char str [101];
    scanf("%s",str);
    for(int i = 0;i<26;i++) count[i] = -1;
    for(int i = 0;i<strlen(str);i++){
        if(count[str[i]-'a']==-1){
            count[str[i]-'a'] = i;
        }
    }
    for(int i = 0;i<26;i++) printf("%d ",count[i]);
    return 0;
}