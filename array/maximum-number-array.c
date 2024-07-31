#include <stdio.h>
void main()
{
    int i, n, max, min;
    printf("enter the range");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers into array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("maximum number is---->- %d \n", max);
    printf("minimum nunber is-->%d", min);
}