#include <stdio.h>
#include <stdlib.h>
                            
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head , *tail;

void Create()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for node ");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = tail = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        tail->next = NULL;
    }
}

void traverseForward()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

void traverseBackward()
{
    struct node *temp = tail;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->prev;
    }
}

void check(){
    if(head == NULL || tail == NULL ){
        printf("List is empty.\n");
    }
    else{
        printf("List is not empty.\n");
    }
}

void insertPos()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    temp = head;
    int pos, i = 1;
    printf("Enter the position where you want to insert ");
    scanf("%d", &pos);
    printf("Enter the data for node ");
    scanf("%d", &newnode->data);
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
}

void deletePos()
{
    struct node *temp = head;
    int pos, i = 1;
    printf("Enter the position you want to delete ");
    scanf("%d", &pos);
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

void deleteKey(){
    struct node *temp = head;
    int key;
    printf("Enter the key ");
    scanf("%d",&key);
    while(temp!=NULL){
        if(temp->data == key){
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
            break;
        }
        else{
            temp = temp->next;
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("Enter the choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Create();
            break;

        case 2:
            traverseForward();
            break;

        case 3:
            traverseBackward();
            break;

        case 4:
            check();
            break;

        case 5:
            insertPos();
            break;

        case 6:
            deletePos();
            break;

        case 7:
            deleteKey();
            break;

        case 8:
            exit(0);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}