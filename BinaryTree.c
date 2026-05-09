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

void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        printf("%d -> %d\n", root->data, root->left->data);

    if (root->right != NULL)
        printf("%d -> %d\n", root->data, root->right->data);

    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    int preorder[] = {10, 5, 3, -1, -1, 7, -1, -1, 20, 15, -1, -1, -1};
    int idx = -1;
    Node *root = createBT(preorder, &idx);
    preorderTraversal(root);
    return 0;
}
