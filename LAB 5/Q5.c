#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct node
{
    int data;
    struct node *link;
};

int detectLoop(struct node *head)
{
    struct node *outer = head;
    int nodesTraversedByOuter = 0;
    // Traverse the Linked List.
    while (outer != NULL)
    {
        outer = outer->link;
        nodesTraversedByOuter++;
        struct node *inner = head;
        int k = nodesTraversedByOuter;
        // iterating inner loop from head to number of nodes traversed by outer at this point.
        while (k > 0)
        {
            if (inner == outer)
            {
                return 1;
            }
            inner = inner->link;
            k--;
        }
    }
    return 0;
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
    printf("%d", detectLoop(head));
    return 0;
}