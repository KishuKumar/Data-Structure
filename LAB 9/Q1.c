#include <stdio.h>
#include <stdlib.h>

struct node
{
  int key;
  struct node *left, *right;
};

struct node *newNode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}

struct node *insert(struct node *node, int key)
{
  if (node == NULL)
    return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

int main()
{
  struct node *root = NULL;
  root = insert(root, 22);
  root = insert(root, 20);
  root = insert(root, 11);
  root = insert(root, 33);
  root = insert(root, 13);
  root = insert(root, 44);
  root = insert(root, 14);
  root = insert(root, 55);
  root = insert(root, 15);

  printf("Inorder traversal: ");
  inorder(root);

  return 0;
}