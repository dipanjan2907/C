#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *prev;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->val = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    newNode->next = head;
    (head)->prev = newNode;
    head = newNode;
    return head;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
void traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->val);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head = NULL;
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 2);
    head = insertAtEnd(head, 10);
    traversal(head);
}