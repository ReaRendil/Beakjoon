#include <stdio.h>
 
int main()
{
    int N,M;
    scanf("%d%d",&M,&N);
    int prime_Number [10001] = {0,};
    for(int i = 2;i<10001;i++) prime_Number[i] = 1;
    for(int i =2;i<10001;i++){
        if(prime_Number[i]==1) {
            prime_Number[i] = i;
            for(int j = i*2;j<10001;j+=i) {
                prime_Number[j] = 0;
            }
        }
    }
    int sum = 0; int min = 0;
    for(int i = M;i<=N;i++) sum+=prime_Number[i];
    for(int i = M;i<=N;i++){
        if(prime_Number[i]!=0) {
            min = prime_Number[i];
            break;
        }
    }
    if(sum==0) printf("-1");
    else printf("%d\n%d",sum,min);
    return 0;
}