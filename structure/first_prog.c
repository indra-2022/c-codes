#include <stdio.h>

struct student
{
    int roll;
    float marks;
    char grd;
};

void main()
{
    struct student std;
    printf("Enter roll number, marks and grade of a student: \n");
    scanf("%d %f %c", &std.roll, &std.marks, &std.grd);

    printf("\nRoll: %d \nMarks: %f \nGrade: &c", std.roll, std.marks, std.grd);
}
