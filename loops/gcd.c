#include <stdio.h>
int main()
{
    int n1, n2, gcd = 0, i, s, lcm = 0;
    printf("enter 1 for gcd and 2 for lcm\t");
    scanf("%d", &s);

    switch (s)
    {
    case 1:
        printf("enter first value--->");
        scanf("%d", &n1);
        printf("enter second value--->");
        scanf("%d", &n2);
        for (i = 1; i <= n1; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                gcd = i;
            }
        }
        printf("gcd=%d", gcd);
        break;

    case 2:
        printf("enter first value--->");
        scanf("%d", &n1);
        printf("enter second value--->");
        scanf("%d", &n2);
        for (i = 1; i <= n1; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                gcd = i;
            }
        }

        lcm = (n1 * n2) / gcd;
        printf("lcm=%d", lcm);
        break;
    }

    return 0;
}