#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("enter the number of row & col--->\n");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("enter the element into the ARRAY--->\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("final output--->\n");
    for (i = 0; i < r; i++)
    {
        if (i == 0 || i == 3)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
        else if (i == 1)
        {
            printf("%d\t\t\t%d", arr[1][0], arr[1][3]);
            printf("\n");
        }
        else if (i == 2)
        {
            printf("%d\t\t\t%d", arr[2][0], arr[2][3]);
            printf("\n");
        }
    }
}