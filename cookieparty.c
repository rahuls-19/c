#include<stdio.h>
int main(void){
int t,n,m;
scanf("%d%d",&n,&m);
if(n>m)
   printf("%d",n-m);
else if(n<m)
{t=m%n;
 printf("%d",n-t);
}
else 
  printf("0");
return 0;
}
