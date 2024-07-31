#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile2.txt", "a");
    fprintf(fp, "This is a second sentence.");
    fclose(fp);
    return 0;
}