#include <stdio.h>

void main()
{
    int a;
    int *b;
    a = 40;
    b = &a;
    printf("%d\n%d", a, b);
}