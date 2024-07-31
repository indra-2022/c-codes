#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int res = n + sum(n - 1);
        return res;
    }
}
void main()
{
    int n;
    printf("enter number--->");
    scanf("%d", &n);
    printf("sum of 1 to %d---->%d", n, sum(n));
}