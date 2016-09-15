#include<stdio.h>
#include<math.h>
int main(void){
long long int i,count=0,n;
while(1){
scanf("%lld",&n);
if(n==0)
    break;
for(i=2;i*i <= n;i++){
count=0;
     if(n%i==0){
       while(n%i==0){
         n=n/i;
         count++;
   }
	
    printf("%lld^%lld ",i,count);
}
}
	if(n != 1){
		printf("%lld^1",n);
	}

printf("\n");}
return 0;
}


