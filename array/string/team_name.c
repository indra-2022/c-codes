#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the size...\n");
    int n, i, j, max = 0;
    scanf("%d", &n);
    char a[n][10];
    printf("\nEnter the string...");
    for (i = 0; i <= n; i++)
    {
        gets(a[i]);
    }
    for (i = 0; i <= n; i++)
    {
        if (max < strlen(a[i]))
        {
            max = strlen(a[i]);
        }
    }

    for (i = 1; i <= max; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%c\t", a[i][j]);
        }
        printf("\n");
    }
}
