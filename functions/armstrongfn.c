#include <stdio.h>
#include <math.h>
int power(int po, int n)
{
    printf("\nValue of po is %d and n is %d \n", po, n);
    int r, sum = 0;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + pow(r, po);
        n = n / 10;
    }
    printf("Return to count() %d: ", sum);
    return sum;
}

int count(int n1)
{
    int counter = 0;
    int n2 = n1;
    while (n1 != 0)
    {
        counter++;
        n1 = n1 / 10;
    }
    int res = power(counter, n2);
    return res;
}

int main()
{
    int num, counter;
    printf("enter number to continue: ");
    scanf("%d", &num);
    if (num == count(num))
        printf("arm strong number");
    else
        printf("non arm strong number");
    return 0;
}
