#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    int len, i;
    printf("enter a name ");
    gets(a);
    len = strlen(a);
    printf("leanth=%d \n", len);
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }

    return 0;
}