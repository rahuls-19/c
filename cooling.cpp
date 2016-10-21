#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(void){
int i,j,t,n,pie[10000],rack[10000],count;
scanf("%d",&t);
while(t--){
         count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&pie[i]);}
        for(i=0;i<n;i++){
		scanf("%d",&rack[i]);
		}
sort(pie,pie+n);
sort(rack,rack+n);
for (int i=0, j = 0; i < n && j < n; i++) {
			while (j < n && pie[i] > rack[j])
				j++;
			if (j < n) {
				count++;
				j++;
			}
		}
printf("%d\n",count);
}
return 0;
}
