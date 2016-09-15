#include<stdio.h>
int main()
{int n,i=1,j,count=0;
scanf("%d",&n);
while(i<n+1){
	for(j=1;j<n+1;){
		if((i*j)<n+1){
			if(i==j)
			     count=count+2;
			else
			    count=count+1;
		}
		j++;
	}i++;
}
printf("%d",(count)/2);
return 0;
}
