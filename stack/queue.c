#include <stdio.h>
#include <stdlib.h>
#define MAX 7
int front = -1, rear = -1;
int queue[MAX];
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
            insert();
            break;
        case 2:
            delete ();
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

insert()
{
    int val;
    printf("enter a number: ");
    scanf("%d", &val);
    if (front == MAX - 1 && rear == MAX - 1)
    {
        printf("THE QUEUE IS FULL");
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[front] = val;
    }
    else
    {
        rear++;
        queue[rear] = val;
    }
}

delete ()
{
    if (front == -1 && rear == -1)
    {
        printf("THE QUEUE IS EMPTY");
    }
    else if (front > rear)
    {
        printf("DELETE IS NOT POSSIBLE");
    }
    else
    {
        printf("%d is deleted...", queue[front]);
        front++;
    }
}

display()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}