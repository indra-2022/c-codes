#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter the number of matrix");
    scanf("%d", &n);
    int arr[n][n];
    int arr2[n][n];
    printf("enter the element into the ARRAY--->");
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
            arr2[i][j] = arr[j][i];
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
    printf("transpose matrix--> \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
}
