#include <stdio.h>
void main()
{
    int i, n, n1, flag = 0, pos;
    printf("enter the range");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers into array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter number to search\n");
    scanf("%d", &n1);
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == n1)
        {
            flag = 1;
            pos = i + 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("the number is found %d and the pos is %d", n1, pos);
    }
}
