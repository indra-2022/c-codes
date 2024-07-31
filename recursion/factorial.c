#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int res = n + fact(n - 1);
        return res;
    }
}
void main()
{
    int n;
    printf("enter number--->");
    scanf("%d", &n);
    printf("fact of 1 to %d---->%d", n, fact(n));
}