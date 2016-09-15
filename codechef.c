#include<stdio.h>
int main(void){
int n,m,t,k;
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&m);
k=(m-1)+(m*(n-1));
if(k%2==0)
    printf("No\n");
else
   printf("Yes\n");
}
return 0;
}
