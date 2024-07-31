#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, leanth, flag = 0;
    char a[50];
    printf("enter a name ");
    gets(a);
    leanth = strlen(a);
    j = leanth - 1;
    for (i = 0; i < leanth; i++)
    {
        if (a[i] != a[j])
        {
            flag = 1;
            break;
        }
        j--;
    }
    if (flag == 0)
    {
        printf("pali");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;
}