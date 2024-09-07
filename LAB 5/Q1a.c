#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int pow;
    struct node *next;
};
struct node *p1,*temp, *head = NULL;

void create(struct node **p)
{
    int i;
    printf("Enter the no of terms in polynimial : ");
    scanf("%d", &i);
    while (i)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->next = NULL;
        printf("Enter the coefficient : ");
        scanf("%d", &new_node->coeff);
        printf("Enter the power : ");
        scanf("%d", &new_node->pow);
        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        i--;
    }
}

void display()
{
    struct node *temp = head;
    printf("The polynomial is :");
    while (temp->next != NULL)
    {
        printf("%d(x^%d) + ", temp->coeff, temp->pow);
        temp = temp->next;
    }
    printf("%d(x^%d)",temp->coeff,temp->pow);
}

int main()
{
    create(&p1);
    // create(&p2);
    display(p1);
    // display(&p2);
    return 0;
}