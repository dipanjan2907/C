#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int val;
    struct Node *next;
} Node Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node *));
    newNode->val = data;
    newNode->val = NULL;
    return newNode;
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    Node *newNode = createNode(data);
    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head;
    temp->next = newNode;
    head = newNode;
    return head;
}
void traversal(Node *head)
{
}
int main(void)
{
}
