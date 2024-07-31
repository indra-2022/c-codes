#include <stdio.h>
int main()
{
    int i, n;
    printf("enter total student");
    scanf("%d", &n);
    int total[n];
    int sub1[n];
    int sub2[n];
    int sub3[n];
    float avg[n];
    char grd[n];
    printf("Enter number for 3 subjects\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d", &sub1[i], &sub2[i], &sub3[i]);
        total[i] = sub1[i] + sub2[i] + sub3[i];
        avg[i] = total[i] / 3;
    }
    for (i = 0; i < n; i++)
    {
        if (avg[i] >= 90)
        {
            grd[i] = 'A';
        }
        else if (avg[i] >= 50 && avg[i] < 90)
        {
            grd[i] = 'B';
        }
        else
        {
            grd[i] = 'F';
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("total=%d\tavg=%f\tgrade=%c\n", total[i], avg[i], grd[i]);
    }
    return 0;
}