#include<stdio.h>
int main(void){
long long int i,count,n;
scanf("%d",&n);
for(i=2;i<n;i++){
count=0;
     if(n%i==0){
       while(n%i==0){
         n=n/i;
         count++;
   }
    printf("%d^%d %d",i,count,n);
}

}
printf("\n");
return 0;
}

