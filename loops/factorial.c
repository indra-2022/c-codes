#include <stdio.h>
int fact(int n)
{
    int f = 1, i;
    for (i = 2; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, i, sum = 0;
    printf("enter number for range of factorial--->");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + fact(i);
    }

    printf("sum=%d", sum);
    return 0;
}
