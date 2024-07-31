#include <stdio.h>
int main()
{
    int r, c, i, j;
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
