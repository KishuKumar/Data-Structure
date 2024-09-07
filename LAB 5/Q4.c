/*Doubly linked list*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *link;
}*tail,*head;

void transverse_forward(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->link;
    }
}
void tranverse_backward()
{
    struct node *current,*next;
    current=head;
    while(current!=NULL)
    {
        next=current->link;
        current->link=current->prev;
        current->prev=next;
        current=next;

    }
    next=head;
    head=tail;
    tail=next;

    
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
    head->prev = NULL;
    head->link = second;
    second->data = 5;
    second->prev = head;
    second->link = third;
    third->data = 6;
    third->prev = second;
    third->link = fourth;
    fourth->data = 7;
    fourth->prev = third;
    fourth->link = fifth;
    fifth->data = 8;
    fifth->prev = fourth;
    fifth->link = NULL;
    printf("Tranverse in Forward direction\n");
    transverse_forward(head);
    printf("Traverse in backward direction\n");
    tranverse_backward(head);

}