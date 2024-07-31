#include <stdio.h>

struct student
{
    int roll;
    float marks;
    char grd[1];
};

void main()
{
    struct student std[2];
    int i;
    printf("Enter roll, marks and grade: \n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d %f %c", &std[i].roll, &std[i].marks, &std[i].grd);
    }

    printf("\n*********************\n");
    for (i = 0; i < 2; i++)
    {
        printf("\nRoll: %d", std[i].roll);
        printf("\nMarks: %f", std[i].marks);
        printf("\nGrade: %s", std[i].grd);
    }
}
