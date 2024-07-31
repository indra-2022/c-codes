#include <stdio.h>
void main()
{
    int a = 5;
    printf("%d\n\n", a);
    int *ptr = &a;
    printf("Address of a: %p", ptr);
}
