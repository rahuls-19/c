#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int binary(int low,int high,int a[],int m){

while(low<high){
	int mid=(high+low)/2;

	if(m>a[mid])
		low=mid+1;
	else if(m<a[mid])
		high=mid-1;
	else
		return mid;
}
return low;
}	
int main(){
int n,a[1000000],m,q,res,i;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
}
sort(a,a+n+1);
scanf("%d",&q);
while(q--){
        scanf("%d",&m);

	res = binary(1,n,a,m);
	printf("%d\n",res);
}
return 0;
}
