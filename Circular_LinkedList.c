#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element: %d\n", ptr->val);
        ptr = ptr->next;

    } while (ptr != head);
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->val = data;

    struct Node *p = head->next;
    while (p->next != head)
        p = p->next;
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    second->next = head;

    printf("Circular Linked List before Insertions\n");
    traversal(head);
    printf("\nCircular Linked List after Insertions\n");
    head = insertAtFirst(head, 43);
    traversal(head);

    return 0;
}
