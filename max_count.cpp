#include<stdio.h>
int max(int a,int b){
if(a<b)
	return b;
else
        return a;
}
int main(void){
int i,a,t,n,num[10004];
scanf("%d",&t);
while(t--){
	scanf("%d",&n);
	for(i=0;i<10001;i++)
		num[i]=0;
	for(i=0;i<n;i++){
		scanf("%d",&a);
                num[a]++;
                }
		int t=0;
                
        for(i=1;i<10001;i++){
	        if(num[t]<num[i])
                     t=i;
                 }
printf("%d %d\n",t,num[t]);
}
return 0;
}

