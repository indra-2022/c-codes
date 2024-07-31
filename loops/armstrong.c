#include<stdio.h>
main()
{
int n,r,sum=0, duplicate;
printf("enter n");
scanf("%d",&n);
duplicate=n;
while(n!=0)
{ r=n%10;
r=r*r*r;
sum=sum+r;
n=n/10;
}
if(sum==duplicate){
printf("armstrong num");
}
else{
printf("non armstrong num");}
}
