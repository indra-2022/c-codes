#include <stdio.h>
int main()
{
    int r, c, i, j, total;
    float avg, sum = 0.0;
    printf("enter the number of row & col");
    scanf("%d%d", &r, &c);
    total = r * c;
    int arr[r][c];
    printf("enter the element into the matrix 1--->");
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
        printf("\n"); // to print the matrix which was given as input
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("sum=%f \n", sum);
    avg = sum / total;
    printf("avg=%f", avg);

    return 0;
}
