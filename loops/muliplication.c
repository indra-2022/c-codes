#include <stdio.h>
int main()
{
    int i, j, multi = 0;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            multi = i * j;
            printf("%dx%d=%d\n", i, j, multi);
        }
    }
}