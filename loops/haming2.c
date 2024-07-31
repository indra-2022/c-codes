#include <stdio.h>
int main()
{
    int num, i, flag = 0, k = 2;
    printf("enter number--->");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("wrong choice\n");
    }
    while (k <= num)
    {
        if (num % k == 0)
        {
            if (k == 2 || k == 3 || k == 5)
            {
                num = num / k;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        else
        {
            k++;
        }
    }
    if (flag == 0)
        printf("Hamming");
    else
        printf("Not Hamming");
    return 0;
}