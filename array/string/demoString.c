#include <stdio.h>
#include <string.h>

int main()
{
    /*char first_str[50];
    printf("Enter a string: ");
    gets(first_str);
    int len = strlen(first_str);
    for (int i = 0; i < len; i++)
    {
        printf("%c: %d\n", first_str[i], first_str[i]);
    }*/
    for (int i = 0; i <= 255; i++)
        printf("%d: %c\n", i, i);
    return 0;
}