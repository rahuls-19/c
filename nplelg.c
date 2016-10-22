#include<stdio.h>
int main(void){
int x,y,w,z;
scanf("%d%d%d%d",&w,&x,&y,&z);
if(w >= x+y+z)
	printf("Happy\n");
else
	printf("Sad\n");
return 0;
}
