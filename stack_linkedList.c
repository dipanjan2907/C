#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
    printf(" \n");
}
int isFull()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
        return 1;
    free(p);
    return 0;
}
int isEmpty(struct Node *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
struct Node *push(struct Node *top, int x)
{
    if (isFull())
    {
        printf("STACK OVERFLOW!");
        return top;
    }
    else
    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = x;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
struct Node *pop(struct Node *top, int *poppedValue)
{
    if (isEmpty(top))
        return NULL;
    struct Node *ptr = top;
    *poppedValue = ptr->data;
    top = top->next;
    free(ptr);
    return top;
}

int main(void)
{
    struct Node *top = NULL;
    top = push(top, 34);
    top = push(top, 91);
    top = push(top, 45);
    top = push(top, 72);
    traversal(top);
    int elem;
    top = pop(top, &elem);
    printf("Popped: %d\n", elem);
    top = pop(top, &elem);
    printf("Popped: %d\n", elem);

    return 0;
}
