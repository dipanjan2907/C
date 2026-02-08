#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->val);
        ptr = ptr->next;
    }
    printf(" \n");
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->val = data;
    return ptr;
}
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    for (int i = 1; i < index; i++)
    {
        p = p->next;
    }
    ptr->val = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->val = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node *insertAfterNode(struct Node *head, int data, struct Node *prevNode)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->val = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main(void)
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    head->val = 19;
    head->next = first;
    first->val = 33;
    first->next = second;
    second->val = 27;
    second->next = NULL;

    printf("Linked List before Insertions\n");
    traversal(head);
    printf("\nLinked List after Insertions\n");
    head = insertAtFirst(head, 43);
    head = insertAtIndex(head, 51, 3);
    head = insertAtEnd(head, 10);
    head = insertAfterNode(head, 91, first);
    traversal(head);

    return 0;
}
