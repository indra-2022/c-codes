#include <Stdio.h>
int i, n, a = 0, b = 1, sum = 0, res;
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d\t", sum);
        fibo(n - 1);
        }
}
int main()
{
    printf("enter number--->>");
    scanf("%d", &n);
    res = fibo(n);
}