#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createBT(int preorder[], int *idx)
{
    (*idx)++;
    if (preorder[*idx] == -1)
        return NULL;
    Node *newNode = malloc(sizeof(Node));
    newNode->data = preorder[*idx];
    newNode->left = createBT(preorder, idx);
    newNode->right = createBT(preorder, idx);
    return newNode;
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    preOrder(root->left);
    preOrder(root->right);
    printf("%d ", root->data);
}
int main()
{
    int preorder[] = {10, 5, 3, -1, -1, 7, -1, -1, 20, 15, -1, -1, -1};
    int idx = -1;
    Node *root = createBT(preorder, &idx);
    preOrder(root);
    printf(" \n");
    inOrder(root);
    printf(" \n");
    postOrder(root);
    printf(" \n");
    return 0;
}
