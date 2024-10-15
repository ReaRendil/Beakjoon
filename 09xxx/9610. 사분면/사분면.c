#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    int num1 = 0,num2 = 0,num3 = 0,num4 = 0,num=0;
    for(int i = 0;i<n;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        if(x==0||y==0)num++;
        else if(x>0&&y>0) num1++;
        else if(x<0&&y>0) num2++;
        else if(x<0&&y<0) num3++;
        else num4++;
    }
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d",num1,num2,num3,num4,num);
    
}