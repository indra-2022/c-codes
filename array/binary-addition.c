#include <stdio.h>
int main()
{
    int b1, b2, n, c = 0, i, r1, r2, sum = 0;
    int res[50];
    int index = 0;
    printf("enter 1st binary--->");
    scanf("%d", &b1);
    printf("enter 2nd binary--->");
    scanf("%d", &b2);
    while (b1 != 0 && b2 != 0)
    {
        r1 = b1 % 10;
        b1 = b1 / 10;

        r2 = b2 % 10;
        b2 = b2 / 10;
        sum = r1 + r2 + c;
        if (sum <= 1)
        {
            res[index] = sum;
            c = 0;
            index++;
        }
        else if (sum == 2)
        {
            res[index] = 0;
            c = 1;
            index++;
        }
        else if (sum == 3)
        {
            res[index] = 1;
            c = 1;
            index++;
        }

        // res[index]=r1+r2;
    }
    if (c == 1)
    {
        res[index] = c;
    }
    for (i = index; i >= 0; i--)
    {
        printf("Res--->%d", res[i]);
    }
}