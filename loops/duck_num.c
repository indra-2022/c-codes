/*duck number checking if 0 is present in a multi degit num then the num is duck num*/
#include<stdio.h>
int main()
{
	int n,i,p=1,r,dup;
	printf("enter num: ");
	scanf("%d",&n);
	dup=n;
	while(n!=0){
		r=n%10;
		p=p*r;
		n=n/10;
	}
	if(p==0){
		printf("duck number");
	}
	else("non duck number");
    return 0;
	
}