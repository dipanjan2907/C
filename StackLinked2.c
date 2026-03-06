#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}
int push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("STACK OVERFLOW!");
        return -1;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return val;
    }
}
int peek(struct stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0)
        printf("Invalid Index");
    else
        return ptr->arr[ptr->top - i + 1];
}
int main(void)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 12;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    for (int i = 1; i <= s->size; i++)
        push(s, i * i + (2 + i));
    printf("Popped: %d\n", pop(s));
    printf("Peeked element at index 6: %d\n\nElements at-\n", peek(s, 6));
    for (int i = s->top; i >= 0; i--)
        printf("Index %d: %d\n", i + 1, peek(s, i));
    free(s);
    free(s->arr);
    return 0;
}