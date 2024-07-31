#include <stdio.h>
int btoo(n1)
{
}
int btod(n1)
{
    int r, dec = 0, base = 1;
    while (n1 > 0)
    {
        r = n1 % 10;
        dec = dec + r * base;
        n1 = n1 / 10;
        base = base * 2;
    }
    return dec;
}
int btohd(n1)
{
}
int main()
{
    int n, s, res;

    printf("enter your choice--> \n");
    printf("1 for binary to octal \n");
    printf("2 for binary to decimal \n");
    printf("3 for binary to hexa decimal \n");
    scanf("%d", &s);
    printf("enter binary value--->");
    scanf("%d", &n);

    switch (s)
    {
    case 1:
        res = btoo(n);
        break;

    case 2:
        res = btod(n);
        break;
    case 3:
        res = btohd(n);
        break;
    }
    printf("result=%d", res);
    return 0;
}