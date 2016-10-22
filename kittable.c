#include<stdio.h>
int main(void){
int i,t,n;
long long a[10002],c[10002],b[10002];
scanf("%d",&t);
while(t--){
	int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if(i==0)
			c[i]=a[i];
		else
			c[i]=a[i]-a[i-1];
	}
	for(i=0;i<n;i++){
		scanf("%lld",&b[i]);
		if(b[i]<=c[i])
			count++;
		}
printf("%d\n",count);
}
return 0;
}
