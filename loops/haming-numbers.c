#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("enter number--->");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("wrong choice\n");
    }
    else
    {
        printf("prime factors---->\n");
        while (num % 2 == 0)
        {
            printf("%d ", 2);
            num = num / 2;
        }
    }
    for (int i = 3; i <= num; i = i + 2)
    {
        while (num % i == 0)
        {
            printf("%d \n", i);
            num = num / i;
            if (num == 2 || 3 || 5)
            {
                flag++;
            }
        }
    }
    if (flag <= 3 && flag != 0)
    {
        printf("haming number");
    }
    else
    {
        printf("not a haming number");
    }
}