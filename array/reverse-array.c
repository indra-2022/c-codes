#include <stdio.h>
void main()
{
    int i, n;
    printf("enter the range");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers into array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n\nThe nummbers are...\n");
    for (i = n - 1; i >= 0; i--)
        printf("%d\t", a[i]);
}