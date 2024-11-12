#include <stdio.h>
#include <stdlib.h>
    int main(){
        int a,b,c,d,e,f,x=-999,y=-999;
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        while(x<=999) {
			if((c-a*x)*e==(f-d*x)*b) {
				break;
			}
            x++;
		}
		while( y<=999) {
			if((c-b*y)*d==(f-e*y)*a) {
				break;
			}
            y++;
		}
        printf("%d %d",x,y);
    }

