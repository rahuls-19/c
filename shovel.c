#include<stdio.h>
int main(void){
int k,r,i;
scanf("%d%d",&k,&r);
for(i=1;i<1000000;i++){
	if((k*i)%10 == 0||((k*i)-r)%10 == 0){
		printf("%d",i);
		break;
		}
	
	
}
return 0;
}
