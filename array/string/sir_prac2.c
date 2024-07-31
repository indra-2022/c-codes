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
}
int main()
{
    int r, c, i, j, k = 0, l = 0;
    printf("enter the number of row & col--->\n");
    scanf("%d%d", &r, &c);
    int n = (r - 2) * (r - 2);
    int arr[r][c];
    int arr2[n];
    printf("enter the element into the ARRAY--->\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("INPUT------>\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i <= r - 2; i++)
    {
        for (j = 1; j <= c - 2; j++)
        {
            arr2[k] = arr[i][j];
            k++;
        }
    }
    bubble(arr2, n);
    for (i = 1; i <= r - 2; i++)
    {
        for (j = 1; j <= c - 2; j++)
        {
            arr[i][j] = arr2[l];
            l++;
        }
    }
    printf("FINAL OUTPUT--->\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}