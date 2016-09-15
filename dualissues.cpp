#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;
int isprime(int num);
int main(void){
int n,i,a[1002],m=0,t;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
sort(a,a+n);
for(i=n;i>=2;i--){
      m=isprime(a[i]);
	if(m!=0){
		printf("%d\n",m*m);
		break;}
		}
if(m==0)
printf("-1\n");
}
return 0;
}
int isprime(int num){
int j,i,prime[1002];
for(i=0;i<=1000;i++)
  prime[i]=1;
prime[0]=0;
prime[1]=0;
for(i=2;i<=sqrt(1000);i++){
   if(prime[i]==1){
     for(j=2;i*j<=1000;j++){
       prime[i*j]=0;}
}
}
if(prime[num]!=0)
    return num;
else
   return 0;
}











