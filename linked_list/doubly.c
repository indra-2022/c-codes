#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *root = NULL;
void insertbegine()
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the value...");
    scanf("%d", &temp->data);
    temp->next = root;
    root = temp;
    root->prev = NULL;
}

void insertLast()
{
    struct Node *temp, *p;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the value...");
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
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
    }
}

void display()
{
    int count = 0;
    struct Node *p;
    p = root;
    if (p == NULL)
    {
        printf("The list is empty...\n");
    }
    else
    {
        while (p->next != NULL)
        {
            printf("%d  ", p->data);
            p = p->next;
            count++;
        }
    }
    if (p->next == NULL)
    {
        printf("%d  \n", p->data);
    }
}
void insertmid()
{
    int i = 0, pos;
    struct Node *temp, *p;
    temp = (struct Node *)malloc(sizeof(struct Node));
    printf("enter the position--->\n");
    scanf("%d", &pos);
    printf("\nEnter the value...");
    scanf("%d", &temp->data);
    p = root;
    while (i != pos - 1)
    {
        p = p->next;
        i++;
    }
    temp->next = p->next;
    temp->prev = p;
    p->next = temp;
}
void deletelast()
{

    struct Node *p = root;
    struct Node *pr = root->prev;
    struct Node *q = root->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
        pr = p->prev;
    }
    p->next = NULL;
    p->prev = pr;
    free(q);
}
void deletemid()
{
    int pos, i;
    struct Node *p = root;
    struct Node *q = root->next;
    struct Node *r = q->next;
    printf("enter the position--->");
    scanf("%d", &pos);
    for (i = 0; i < pos - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    r->prev = p;
    free(q);
}
void deletefirst()
{
    struct Node *temp = root;
    root = root->next;
    root->prev = NULL;
    free(temp);
}

int main()
{
    int counter = 0;
    int opn;
    char ch;
    printf("1.Instert last\n");
    printf("2.Display\n");
    printf("3.Exit\n");
    printf("4:insert mid\n");
    printf("5:insert begine\n");
    printf("6:display size\n");
    printf("7:delete last node\n");
    printf("8:delete mid\n");
    printf("9:delete first\n");
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &opn);
        switch (opn)
        {
        case 1:
            insertLast();
            counter++;
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        case 4:
            insertmid();
            counter++;
            break;
        case 5:
            insertbegine();
            counter++;
            break;
        case 6:
            printf("size--->%d", counter);
            break;
        case 7:
            deletelast();
            break;
        case 8:
            deletemid();
            break;
        case 9:
            deletefirst();
            break;

        default:
            printf("Wrong choice!");
        }
    }
    return 0;
}
