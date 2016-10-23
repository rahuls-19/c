#include<stdio.h>
int main(void){
	int i,a[1000000],n,m,flag=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
 		scanf("%d",&a[i]);
	for(i=n;i>0;i--){
		if(a[i]==m){
			printf("%d\n",i);
			flag=1;
			break;
			}
		}
	if(flag==0)
		printf("-1\n");
	return 0;
	}
