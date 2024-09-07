#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp;
int count = 0;

void Create()
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for node");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    if (head == NULL)
    {
        head = temp = new_node;
    }
    else
    {
        temp->next = new_node;
        temp = new_node;
    }
}

void insertBeg()
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for node");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    if (head == NULL)
    {
        head = temp = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

void insertEnd()
{
    temp = head;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of node ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertPos()
{
    temp = head;
    int pos, i = 1;
    printf("Enter the position where the new node is to be inserted ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid Position\n");
    }
    else
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter the data of node ");
        scanf("%d", &new_node->data);
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
        count++;
    }
}

int main()
{
    int choice;
    printf("\nCreate a list.");
    printf("\nDisplay the content of the list.");
    printf("\nInsert a node at the beginning of the list.");
    printf("\nInsert a node at the end of the list.");
    printf("\nInsert a node after k th node in to the list.\n");
    while (1)
    {
        printf("Enter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Create();
            break;

        case 2:
            display();
            break;

        case 3:
            insertBeg();
            break;

        case 4:
            insertEnd();
            break;

        case 5:
            insertPos();
            break;

        case 6:
            exit(0);
            break;
        default:
            printf("Incorrect Choice\n");
            break;
        }
    }

    return 0;
}