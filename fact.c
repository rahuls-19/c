#include<stdio.h>
int main(void){
int i,num,m,fact=1;
scanf("%d%d",&num,&m);
if(num==0||num==0)
    fact=1;
else{
      for(i=1;i<=num;i++)
         {
             fact=(fact*i)%m;
         }
    }
printf("%d",fact);
return 0;
}
                                                                               

