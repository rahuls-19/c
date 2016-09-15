#include<stdio.h>
int main(void){
 int n,t,res;
 scanf("%d",&t);
 while(t--){
 	scanf("%d",&n);
 	
 	res=(n/5)+(n/25)+(n/125)+(n/625)+(n/3125)+(n/15625)+(n/78125)+(n/390625)+(n/1953125)+(n/9765625)+(n/48828125)+(n/244140625)+(n/1220703125);
 	printf("%d\n",res);
 }
return 0;
}
