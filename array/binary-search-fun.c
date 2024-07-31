#include <stdio.h>
int binary(int n, int num, int arr[])
{
    int low, high, mid;
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

int main()
{
    int i, n, flag = 0, pos, num, mid, low, high, res;
    printf("enter the range");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers into array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter number to search");
    scanf("%d", &num);
    res = binary(n, num, arr);
    if (res == 2)
    {
        printf("no result found");
    }
    else
    {
        printf("the num is %d and the position is %d", num, res);
    }
    return 0;
}