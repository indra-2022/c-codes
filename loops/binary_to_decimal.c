#include<stdio.h>
#include<math.h>
int main()
{
	int n,dec,b,p=0,dup,r;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{r=n%10;
	dec=dec+r*pow(2,p);
	n=n/10;
	p++;
}
printf("decimal=%d",dec);
return 0;
}