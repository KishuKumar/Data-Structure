#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void tranverse(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->link;
    }
}
struct node *insertatbeginning(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->link = head;
    ptr->data = data;
    return ptr;
}
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->link != NULL)
    {
        p = p->link;
    }
    p->link = ptr;
    ptr->link = NULL;
    return head;
}
struct node *insertatanypostion(struct node *head, int data, int index)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    struct node *p = head;
    int i = 0;
    if (index < 7)
    {
        while (i != index - 1)
        {
            p = p->link;
            i++;
        }
        ptr->data = data;
        ptr->link = p->link;
        p->link = ptr;
    }
    else
    {
        printf("Invalid Index\n");
    }

    return head;
}
struct node *deleteatfirst(struct node *head)
{
    struct node *ptr = head;
    head = ptr->link;

    free(ptr);
    return head;
}
struct node *deleteatend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->link;
    while (q->link != NULL)
    {
        p = p->link;
        q = q->link;
    }
    p->link = NULL;
    free(q);
    return head;
}
struct node *deleteatanyposition(struct node *head, int value)
{
    struct node *ptr = head;
    struct node *q = ptr->link;
    while (q->data != value && q->link != NULL)
    {
        ptr = ptr->link;
        q = q->link;
    }
    if (q->data == value)
    {
        ptr->link == q->link;
        free(q);
    }
    return head;
}
struct node *count(struct node *head)
{
    struct node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        ptr = ptr->link;
        count++;
    }
    printf("Total node :-%d", count);
}
void search(struct node *ptr, int value)
{
    int flag = 0;
    while (ptr != NULL)
    {
        if (ptr->data == value)
        {
            flag = 1;
            break;
        }
        ptr = ptr->link;
    }
    if (flag == 1)
    {
        printf("Elements if found\n");
    }
    else
    {
        printf("elements is not found");
    }

}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->link = second;
    second->data = 5;
    second->link = third;
    third->data = 6;
    third->link = fourth;
    fourth->data = 7;
    fourth->link = fifth;
    fifth->data = 8;
    fifth->link = NULL;

    tranverse(head);
    printf("Insertion At Beginning \n");
    head = insertatbeginning(head, 56);
    tranverse(head);
    printf("Insertion At End\n");
    head = insertatend(head, 78);
    tranverse(head);
    printf("Insertion at any position\n");
    int index;
    printf("Enter the index where you want to insert value :- ");
    scanf("%d", &index);
    head = insertatanypostion(head, 98, index);
    tranverse(head);
    printf("Deletion At Beginning\n");
    head = deleteatfirst(head);
    tranverse(head);
    printf("Deletion At end\n");
    head = deleteatend(head);
    tranverse(head);
    printf("Deletion At any position\n");
    head = deleteatanyposition(head, 3);
    tranverse(head);
    printf("Count the Node \n");
    head = count(head);
    tranverse(head);

    printf("To search an elemnts\n");
    int value;
    printf("Enter the data :- ");
    scanf("%d", &value);
    search(head,value);

}