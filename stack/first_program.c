#include <stdio.h>
#include <stdlib.h>
#define MAX 7
int top = -1;
int stack[MAX];
main()
{
    int opn;
    char ch;
    printf("1.Instert data\n");
    printf("2.Delete data\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    do
    {
        printf("\nEnter Your Choice: ");
        scanf("%d", &opn);
        switch (opn)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice!");
        }
    } while (1);
}

push()
{
    int val;
    if (top == MAX - 1)
    {
        printf("The stack is full");
    }
    else
    {
        top++;
        printf("Enter a value: ");
        scanf("%d", &val);
        stack[top] = val;
    }
}

pop()
{
    if (top == -1)
    {
        printf("The stack is empty");
    }
    else
    {
        top--;
        printf("%d is deleted...", stack[top + 1]);
    }
}

display()
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}