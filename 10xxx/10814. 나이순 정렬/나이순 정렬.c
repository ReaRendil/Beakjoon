#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name [101];
    int age;
    int id;
} member;
int cmp(member* a,member* b){
    if(a->age!=b->age){
        return a->age - b->age;
    }return a->id-b->id;
}
    int main(){
        int n;
        scanf("%d",&n);
        member* mbrs = (member*)malloc(n*sizeof(member));
        for(int i = 0;i<n;i++){
            scanf("%d %s",&mbrs[i].age,mbrs[i].name);
            mbrs[i].id = i;
        }
        
        qsort(mbrs,n,sizeof(member),cmp);
        for(int i = 0;i<n;i++) printf("%d %s\n",mbrs[i].age,mbrs[i].name);
        free(mbrs);
    }

