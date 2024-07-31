#include <stdio.h>
int main()
{
    int r, c, i, j, k;
    printf("enter the number of row & col");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("enter the element into the ARRAY--->");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int arr2[r][c];
    printf("enter the element into the ARRAY2 --->");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr3[i][j] = 0;
            for (k = 0; k < r; k++)
            {
                arr3[i][j] = arr3[i][j] + arr[i][k] * arr2[k][j];
            }
        }
    }
    printf("first array---> \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("second array---->\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("multiplication----> \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}