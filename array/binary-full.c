#include <stdio.h>
int binary(int arr[], int n)
{
    int low, high, mid, num;
    printf("\nenter number to search--->");
    scanf("%d", &num);
    low = 0;
    high = n - 1;

    while (low <= high)
    {

        mid = (low + high) / 2;
        if (arr[mid] == num)
        {

            return mid + 1;
        }
        else if (num > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 2;
}
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
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("the array is not sorted,\nHere is the sorted array-->");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    search = binary(arr, n);
    return search;
}
int main()
{
    int i, n, flag = 0, pos, num, mid, low, high, res;
    int sort;
    printf("enter the range-->");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers into array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort = bubble(arr, n);
    if (sort == 2)
    {
        printf("no result found");
    }
    else
    {
        printf("the number is found & the position is-->%d ", sort);
    }
    return 0;
}
