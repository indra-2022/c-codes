#include <stdio.h>
void main()
{
    int n, j, i, key;
    printf("enter the range--->");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers into array--->\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (key < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}