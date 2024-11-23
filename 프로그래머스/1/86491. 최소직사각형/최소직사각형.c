#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** size, size_t row, size_t col) {
    int max = 0;
    int max2 = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(size[i][j]>max) max = size[i][j];
        }
    }
    for(int i = 0;i<row;i++){
        int x = size[i][0];
        int y = size[i][1];
        if(x>y){
            if(y>max2) max2 = y;
        }else{
            if(x>max2) max2 = x;
        }
    }
    return max*max2;
}