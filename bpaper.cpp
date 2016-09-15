#include<stdio.h>
#include<stdlib.h>
int main(void){
int t,m,i,j,count=0,countg=0,countr=0;
char a[1000][1000];
scanf("%d",&t);
while(t--){
scanf("%d",&m);
for(i=0;i<2*m;i++){
scanf("%s",a[i]);
}
count=0;
countg=0;
countr=0;



for(i=0;i<2*m;i++){
        for(j=0;j<2*m;j++){
         if(i!=j){
          if(a[i][j]=='Y')
              count++;
 	 else
  	      countg++;
}
}
 if(i!=j){
          if(a[i][j]=='Y'){
              countr++;
       
              break;}
}
}

if(count==0)
	printf("%d\n",(countg)*2);
else if(countg==0)
	printf("0\n");
else {
     
        printf("%d\n",countr);
}
}
return 0;
}

		

