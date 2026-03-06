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
void display(int *stack, int top)
{
    if (top == -1)
    {
        printf("Stack Empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
        printf("| %d |\n", stack[i]);

    printf("-----\n");
}
int main()
{
    int stkSize;
    printf("Enter Size of Stack: ");
    scanf("%d", &stkSize);
    int item, stack[stkSize], top = -1;

    printf("Item: ");
    scanf("%d", &item);

    for (int i = 1; i <= stkSize; i++)
        top = push(stack, top, stkSize, item * i);

    printf("\nStack now\n");
    display(stack, top);

    top = pop(stack, top);
    printf("\nStack now\n");
    display(stack, top);
    return 0;
}