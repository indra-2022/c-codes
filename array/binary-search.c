#include <stdio.h>

int main()
{
    int i, n, flag = 0, pos, num, mid, low, high;
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
    low = 0;
    high = n - 1;
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            flag = 1;
            pos = mid + 1;
            break;
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
    if (flag == 1)
    {
        printf("the number is found %d and position is %d", num, pos);
    }
    else
    {
        printf("no result found");
    }
    return 0;
}
