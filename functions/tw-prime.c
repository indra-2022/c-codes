#include <stdio.h>

int prime(int n1)
{
    int i, count = 0, flag = 0;
    for (i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        flag = 1;
    }
    return flag;
}

int reverse(int n)
{
    int rev = 0, r;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}

int main()
{
    int n, r, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    if (prime(n) == 1)
    {
        rev = reverse(n);
        prime(rev);

        if (prime(rev) == 1)
        {
            printf("This is a twisted prime number\n");
        }
        else
        {
            printf("Not a twisted prime number\n");
        }
    }
    else
    {
        printf("Not a prime number\n");
    }

    return 0;
}
