#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    // Input: How many terms of the Fibonacci series to display
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    // Displaying the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
