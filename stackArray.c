#include <stdio.h>

int push(int *stack, int top, int size, int item)
{
    if (top == size - 1)
    {
        printf("Overflow\n");
        return top;
    }

    top = top + 1;
    stack[top] = item;
    printf("Pushed %d\n", item);
    return top;
}

int pop(int *stack, int top)
{
    if (top == -1)
    {
        printf("Underflow\n");
        return top;
    }

    printf("\nPopped: %d\n", stack[top]);
    top = top - 1;
    return top;
}
void display(int *stack, int size)
{
    for (int i = 0; i <= size; i++)
        printf("%d ", stack[i]);
}
int main()
{
    int item, stack[5], top = -1;

    printf("Item: ");
    scanf("%d", &item);

    top = push(stack, top, 5, item);
    top = push(stack, top, 5, item * 2);
    top = push(stack, top, 5, item * 3);
    top = pop(stack, top);
    printf("\nStack now\n");
    display(stack, top);
    return 0;
}