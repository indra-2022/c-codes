// it s a number whos suare devided by 2 parts and such that sum of part is = to the original number and none of the parts has value 0
// ex 45^2=2025 20+25=45
// ex 297^2=88209 88+209=297

#include <stdio.h>
#include <math.h>

int main()
{
    int n, counter = 0, square, right, left, diviser;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n = n / 10;
        counter++;
    }
    square = pow(n, 2);
    diviser = pow(10, counter);
    right = square % diviser;
    left = square / diviser;
    if (left + right == n)
    {
        printf("kaprepar number");
    }
    else
    {
        ("non kaprepar number");
    }
}