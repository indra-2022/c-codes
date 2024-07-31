#include<stdio.h>
int main()
{
int n, counter=0;
printf("enter number-->");
scanf("%d",&n);
while(n!=0)
{ 
n=n/10;
counter++;
}
printf("number of digits=%d",counter);
}
