#include <stdio.h>
float median(int a[], int n)
{
    float mid;
    if (n % 2 == 0)
    {
        int mid1 = n / 2 + 1;
        int mid2 = n / 2;
        mid = (a[mid1] + a[mid2]) / 2.0;
    }
    else
    {
        mid = a[n / 2];
    }
    return mid;
}
int bubble(int a[], int n)
{
    int j, i, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    float res = median(a, n);
    return res;
}
int main()
{
    int m, n, i, crange, j = 0;
    printf("enter the range of arr1-->");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the numbers into array-->");
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("enter the range of arr2--->");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the numbers into array-->");
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    crange = m + n;

    int c[crange];
    for (i = 0; i < m; i++)
    {
        c[i] = arr1[i];
    }
    for (i = m; i < crange; i++)
    {
        c[i] = arr2[j];
        j++;
    }

    float res = bubble(c, crange);
    printf("median of two merged array is--->%f", res);
    return 0;
}
