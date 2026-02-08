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
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *deleteNodeBtwn(struct Node *head, int index)
{
    struct Node *ptr = head;
    for (int i = 0; i < index - 1; i++)
        ptr = ptr->next;
    struct Node *q = ptr->next;
    ptr->next = q->next;
    free(q);
    return head;
}
struct Node *deleteLastNode(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = NULL;
    free(q);
    return head;
}
struct Node *deleteNodeWithVal(struct Node *head, int data)
{
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->val != data && q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }
    if (ptr->val == data)
    {
        ptr->next = q->next;
        free(q);
    }
    return head;
}
int main(void)
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));

    head->val = 12;
    head->next = first;

    first->val = 25;
    first->next = second;

    second->val = 38;
    second->next = third;

    third->val = 41;
    third->next = fourth;

    fourth->val = 67;
    fourth->next = fifth;

    fifth->val = 89;
    fifth->next = NULL;

    printf("Linked List before Deletions\n");
    traversal(head);
    printf("Linked List after Deletions\n");
    head = deleteFirst(head);
    head = deleteNodeBtwn(head, 3);
    head = deleteLastNode(head);
    head = deleteNodeWithVal(head, 89);
    traversal(head);

    return 0;
}
