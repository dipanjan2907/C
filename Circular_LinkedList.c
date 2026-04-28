#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} Node;

/* Create new node */
Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->val = data;
    newNode->next = NULL;

    return newNode;
}

/* Insert at beginning */
Node *insertAtFirst(Node *head, int data)
{
    Node *newNode = createNode(data);

    if (head == NULL)
    {
        newNode->next = newNode; // points to itself
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

/* Insert at end */
Node *insertAtEnd(Node *head, int data)
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

    temp->next = newNode;
    newNode->next = head;

    return head;
}

/* Delete first node */
Node *deleteAtBeginning(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    Node *last = head;

    while (last->next != head)
    {
        last = last->next;
    }

    Node *temp = head;
    head = head->next;
    last->next = head;

    free(temp);

    return head;
}

/* Delete last node */
Node *deleteAtEnd(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    Node *temp = head;

    while (temp->next->next != head)
    {
        temp = temp->next;
    }

    Node *last = temp->next;
    temp->next = head;

    free(last);

    return head;
}

/* Traversal */
void traversal(Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    Node *temp = head;

    do
    {
        printf("%d ", temp->val);
        temp = temp->next;
    } while (temp != head);

    printf("\n");
}

int main()
{
    Node *head = NULL;

    head = insertAtFirst(head, 10);
    head = insertAtFirst(head, 20);
    head = insertAtEnd(head, 30);

    traversal(head); // 20 10 30

    head = deleteAtBeginning(head);
    traversal(head); // 10 30

    head = deleteAtEnd(head);
    traversal(head); // 10

    return 0;
}