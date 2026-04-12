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
struct Node *deleteAtBeginning(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct Node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    free(temp);
    return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);
    return head;
}
void traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->val);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    struct Node *head = NULL;
    head = insertAtBeginning(head, 1);
    head = insertAtBeginning(head, 2);
    head = insertAtEnd(head, 3);
    traversal(head);
    head = deleteAtBeginning(head);
    head = deleteAtEnd(head);
    traversal(head);
    return 0;
}