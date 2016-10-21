#include<stdio.h>
#include<limits.h>
int main(void){
int i,j,n,a = INT_MIN,sum,ar[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
for(i=0;i<n;i++){
        sum=0;
        
	for(j=i;j<n;j++){
		sum=sum+ar[j];
                if(a<sum)
                    a=sum;
              }
                
}
printf("%d",a);
return 0;
}
