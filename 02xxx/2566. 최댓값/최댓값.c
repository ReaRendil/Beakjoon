#include <stdio.h>
#include <string.h>
int main(){
    int max = -1,mx = 0,my = 0;
    for(int i = 0;i<9;i++) for(int j = 0;j<9;j++) {
        int n;
        scanf("%d",&n);
        if(max<n){
            max = n;mx = i+1;my = j+1;
        }
    }printf("%d\n%d %d",max,mx,my);
    return 0;
}