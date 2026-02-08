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

    traversal(head);
    return 0;
}
