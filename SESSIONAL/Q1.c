#include <stdio.h>
#include <stdlib.h>
// Structure of a node
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
// Function to create a new node
node *create_node(int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
// Function to insert a node in the tree
node *insert_node(node *root, int data)
{
    // Base condition
    if (root == NULL)
    {
        root = create_node(data);
    }
    // Recursive Condition
    else if (data <= root->data)
    {
        root->left = insert_node(root->left, data);
    }
    else
    {
        root->right = insert_node(root->right, data);
    }
    return root;
}
// Inorder Traversal of data
void inorder(node *head)
{
    if (head == NULL)
        return;
    inorder(head->left);
    printf("%d ", head->data);
    inorder(head->right);
}
// Finding the h/2 element of level h of the tree
int find_h_over_2(node *root, int h)
{
    if (root == NULL)
        return 0;
    if (h == 1)
        return root->data;
    else if (h > 1)
        return find_h_over_2(root->left, h - 1) + find_h_over_2(root->right, h - 1);
}
void main(void)
{
    node *root = NULL;
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        root = insert_node(root, data);
    }
    printf("Inorder Traversal: ");
    inorder(root);
    int h = 0;
    // Finding the height of the tree
    while (find_h_over_2(root, h) != 0)
    {
        h++;
    }
}