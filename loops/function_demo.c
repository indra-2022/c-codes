#include<stdio.h>
int Sum(int p, int q)
{
    int c;
    c=p+q;
    return c;
}

void main(){
    int a,b;
    printf("Enter two numbers...");
    scanf("%d %d",&a,&b);
    int res = Sum(a,b);
    printf("Sum = %d",res);
}