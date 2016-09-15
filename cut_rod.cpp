#include<stdio.h>
#include<iostream>
using namespace std;
int cut_rod(int p[],int n);
int memo_cut_rod_aux(int p[],int n,int r[]);
int main(void){
int p[100];
int n,i,t;
scanf("%d",&n);
for(i=1;i<=n;i++)
    scanf("%d",&p[i]);
t=cut_rod(p,n);
printf("%d",t);
return 0;
}
int cut_rod(int p[],int n){
int r[100],i;
for(i=1;i<=n;i++)
   r[i]=-1;
return memo_cut_rod_aux(p,n,r);
}

int memo_cut_rod_aux(int p[],int n,int r[]){
int i,q;
if(r[n]>=0)
    return r[n];
if(n==0)
   q = 0;
else
    q=-1;
for(i=1;i<=n;i++)
   q=max(q,p[i]+memo_cut_rod_aux(p,n-i,r));
r[n]=q;
return q;
}

