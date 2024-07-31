#include <stdio.h>
void main()
{
    int n, j, i, temp;
    printf("enter the range--->");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers into array--->\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {

            if (a[j] < a[i])
            {

                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}