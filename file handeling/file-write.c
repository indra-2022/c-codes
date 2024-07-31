#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("myfile2.txt", "w");
    fprintf(fp, "This is a first sentence. ");
    fclose(fp);
}