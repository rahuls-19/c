#include<stdio.h>
#include<limits.h>
int max(int a,int b){
if(a>b)
	return a;
else
	return b;
}
int main(void){
int i,n,cur_max,total_max,a[10000];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
cur_max = a[0];
total_max = a[0];
for(i=1;i<n;i++){
	cur_max = max(a[i],a[i]+cur_max);
        total_max = max(cur_max,total_max);
      }
printf("%d",total_max);
return 0;
}
