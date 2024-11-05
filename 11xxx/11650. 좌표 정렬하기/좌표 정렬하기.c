#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int x;
    int y;
} point;
int cmp(point* a,point* b){
    if(a->x!=b->x){
        return a->x - b->x;
    }return a->y-b->y;
}
    int main(){
        int n;
        scanf("%d",&n);
        point* pt = (point*)malloc(sizeof(point)*n);
        for(int i = 0;i<n;i++){
            
            scanf("%d %d",&pt[i].x,&pt[i].y);
        }
        qsort(pt,n,sizeof(point),cmp);
        for(int i = 0;i<n;i++) printf("%d %d\n",pt[i].x,pt[i].y);
        free(pt);
    }

