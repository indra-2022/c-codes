#include <stdio.h>
int bubble(int arr[], int n)
{
    int i, temp, j, search, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main()
{
    int r, c, i, j, k = 0;
    printf("enter the number of row & col");
    scanf("%d%d", &r, &c);
    printf("minimum value-->2\t maximum value-->10\n");
    int arr[r][c];
    int arr2[r];
    printf("enter the element into the ARRAY--->");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (r >= 2 && r <= 10 && c >= 2 && c <= 10)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("RES-->\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr2[k] = arr[i][j];
            k++;
        }
        bubble(arr2, r);
        k = 0;
    }
}