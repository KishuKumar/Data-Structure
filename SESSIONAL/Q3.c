#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

struct node *insert_node(struct node *head, int data)
{
    if (head == NULL)
    {
        head = create_node(data);
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = create_node(data);
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

bool is_factor(int n, int k)
{
    if (n % k == 0)
    {
        return true;
    }
    return false;
}

void insertion_sort(struct node *head, int k)
{
    struct node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if (i == k)
        {
            i = 0;
            temp = temp->next;
        }
        else
        {
            struct node *temp2 = temp->next;
            while (temp2 != NULL)
            {
                if (temp->data > temp2->data)
                {
                    int temp3 = temp->data;
                    temp->data = temp2->data;
                    temp2->data = temp3;
                }
                temp2 = temp2->next;
            }
            i++;
            temp = temp->next;
        }
    }
}

int main()
{
    struct node *head = NULL;
    int n, k;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    if (is_factor(n, k))
    {
        printf("Enter the elements of the linked list: ");
        for (int i = 0; i < n; i++)
        {
            int data;
            scanf("%d", &data);
            head = insert_node(head, data);
        }
        insertion_sort(head, k);
        display(head);
    }
    else
    {
        printf("The value of k is not a factor of n");
    }
    return 0;
}