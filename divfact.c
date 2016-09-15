#include<stdio.h>
int main(void){
long long int i,num,sum,count,j,prime[100000],m=1000000007,n,t;

scanf("%lld",&t);
while(t--){
scanf("%lld",&n);
for(i=1;i<=n;i++)
    prime[i]=1;
prime[0]=0;
prime[1]=0;
for(i=2;i*i<=n;i++){
      if(prime[i]==1){
      for(j=2;i*j<=n;j++){
        prime[i*j]=0;
}
}}
sum=1;
for(i=2;i<=n;i++){
count=0;
if(prime[i]==1){
num=n;
while(n>0){
  n=n/i;
  count=count+n;
}
n = num;
sum=((sum%m)*(count+1)%m)%m;
}
	
}
printf("%lld\n",sum);
}
return 0;

}

