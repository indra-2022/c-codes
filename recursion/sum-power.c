#include <stdio.h>
#include <math.h>
int power(int n)
{
    int res;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        res = pow(n, n) + power(n - 1);
    }
    return res;
}
void main()
{
    int n;
    printf("enter number--->");
    scanf("%d", &n);
    printf("power of 1 to %d---->%d", n, power(n));
}