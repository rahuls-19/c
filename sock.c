#include<stdio.h>
int main(void){
int n,a[1000],i,j,count=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
for(i=1;i<n;i++){
	for(j=i+1;j<=n;j++){
		if(a[i]!=-1&&a[i]==a[j]){
			count++;
			a[j]=-1;
			break;
			}
		}
		}
	printf("%d\n",count);
	}


