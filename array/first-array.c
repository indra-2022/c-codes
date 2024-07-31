#include <stdio.h>
void main()
{
    int i;
    int a[6];
    printf("Enter the numbers into array\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &a[i]);
    printf("\n\nThe nummbers are...\n");
    for (i = 0; i < 6; i++)
        printf("%d\t", a[i]);
}