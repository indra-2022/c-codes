#include <stdio.h>
int main()
{
    int n, i, j, sumrd = 0, sumld = 0;

    printf("enter the number of row & col");
    scanf("%d", &n);
    int arr[n][n];
    printf("enter the element into the matrix--->");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumrd = sumrd + arr[i][j];
            }
            if (i + j == n - 1)
            {
                sumld = sumld + arr[i][j];
            }
        }
    }
    printf("sumrd=%d \n", sumrd);
    printf("sumld=%d", sumld);

    return 0;
}
