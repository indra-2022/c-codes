#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("myfile.txt", "r");
    if (fp == NULL)
        printf("The file does not exist...");
    else
    {
        while (1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
                break;
            else
                printf("%c", ch);
        }
    }
    fclose(fp);
}