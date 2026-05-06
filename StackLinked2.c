#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

struct Stack *createStack(int size)
{
    struct Stack *s = malloc(sizeof(struct Stack));

    if (s == NULL)
    {
        printf("Memory Allocation Failed\n");
        exit(1);
    }

    s->size = size;
    s->top = -1;
    s->arr = malloc(size * sizeof(int));

    if (s->arr == NULL)
    {
        printf("Memory Allocation Failed\n");
        exit(1);
    }

    return s;
}

void destroyStack(struct Stack *s)
{
    free(s->arr);
    free(s);
}

int isFull(struct Stack *s)
{
    return (s->top == s->size - 1);
}

int isEmpty(struct Stack *s)
{
    return (s->top == -1);
}

void push(struct Stack *s, int val)
{
    if (isFull(s))
    {
        printf("Stack Overflow!\n");
        return;
    }

    s->arr[++(s->top)] = val;
}

int pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow!\n");
        return -1;
    }

    return s->arr[(s->top)--];
}

int peek(struct Stack *s, int position)
{
    int index = s->top - position + 1;

    if (index < 0)
    {
        printf("Invalid Position\n");
        return -1;
    }

    return s->arr[index];
}

void displayStack(struct Stack *s)
{
    printf("\nElements in stack:\n");

    for (int pos = 1; pos <= s->top + 1; pos++)
    {
        printf("Position %d : %d\n", pos, peek(s, pos));
    }
}

int main()
{
    struct Stack *s = createStack(5);

    for (int i = 1; i <= 5; i++)
        push(s, i * i + (i + 2));

    printf("Popped: %d\n", pop(s));

    printf("Element at position 2: %d\n",
           peek(s, 2));

    displayStack(s);

    destroyStack(s);

    return 0;
}