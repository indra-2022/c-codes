/* krishna murti number
logic= sum of degits factorial= the original number
*/
#include<stdio.h>
int main()
{
	int n,f,sum=0,r,i,dup;
	printf("enter number");
	scanf("%d",&n);
	dup=n;
	while(n!=0)
	{r=n%10;
	f=1;
	for(i=1;i<=r;i++){
		f=f*i;
	}
	sum=sum+f;
	n=n/10;}
	if(sum==dup){
		printf("krishna murti number");
	}
	else{
		printf("non krishna murti number");}
		return 0;
	}
	
	
	

