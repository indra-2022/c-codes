#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter the range");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers into array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\n the sum of numbers is---->");
    for (i = 0; i <= n - 1; i++)
        sum = sum + arr[i];
    printf("%d", sum);
}