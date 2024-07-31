#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *root = NULL;

void insertLast()
{
    struct Node *temp, *p;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the value...\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        p = root;
        while (p->next != NULL)
        {
            p = p->next; // Moving to the next node
        }
        p->next = temp;
    }
}

void display()
{
    struct Node *p;
    p = root;
    while (p->next != NULL)
    {
        printf("%d  ", p->data);
        p = p->next; // Moving to the next node
    }
    printf("%d  ", p->data);
}

void size()
{
    int counter = 0;
    struct Node *p;
    p = root;
    while (p->next != NULL)
    {
        counter++;
        p = p->next;
    }
    printf("Size=%d", counter + 1);
}

void insertFirst()
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the value...\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    temp->next = root;
    root = temp;
}

void insertAny()
{
    int pos, i;
    struct Node *temp, *p;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the position to insert value:");
    scanf("%d", &pos);
    printf("\nEnter the value...\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    p = root;
    for (i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
}

void delete()
{
    int pos, i;
    printf("Enter the position to delete the value:");
    scanf("%d", &pos);
    struct Node *temp = root, *del;
    if (pos == 0)
    {
        root = root->next;
        temp->next = NULL;
        printf("%d is deleted...", temp->data);
        free(temp);
    }
    else
    {
        for (i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
            del = temp->next;
            temp->next = temp->next->next;
            printf("%d is deleted...", del->data);
            free(del);
        }
    }
}

void main()
{
    int opn;
    char ch;
    printf("1.Insert last\n");
    printf("2.Display\n");
    printf("3.Size\n");
    printf("4.Insert first\n");
    printf("5.Insert at any position\n");
    printf("6.Delete\n");
    printf("7.Exit\n");
    do
    {
        printf("\nEnter Your Choice: ");
        scanf("%d", &opn);
        switch (opn)
        {
        case 1:
            insertLast();
            break;

        case 2:
            display();
            break;

        case 3:
            size();
            break;

        case 4:
            insertFirst();
            break;

        case 5:
            insertAny();
            break;

        case 6:
            delete ();
            break;

        case 7:
            exit(0);
            break;

        default:
            printf("Wrong choice!");
        }
    } while (1);
}