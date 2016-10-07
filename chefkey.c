#include<stdio.h>
int main(void){
int i,n,m,c,t;
scanf("%d",&t);
while(t--){
	int count=0,net=0;
	scanf("%d%d%d",&n,&m,&c);
	for(i=1;i<=c;i++){
		if(c%i==0){
             	       if((i<=n&&c/i<=m)&&(i<=m&&c/i<=n)){
                              
                                count=count+1;}

			else if((i<=n&&c/i<=m)||(i<=m&&c/i<=n)){
                          
				net=net+1;}
			else
				count=count+0;
			}
			}
        printf("%d\n",count+net/2);
	}
return 0;
}
