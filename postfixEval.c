#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

void push(int stk[], int *top, int elem)
{
    stk[++(*top)] = elem;
}

int pop(int stk[], int *top)
{
    return stk[(*top)--];
}

int calculate(int a, int b, char op)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else if (op == '/')
        return a / b;

    return 0;
}

void evalPostfix(char postfix[])
{
    int top = -1;
    int stack[MAX];

    for (int i = 0; postfix[i] != '\0'; i++)
    {
        char c = postfix[i];
        if (isdigit(c))
        {
            push(stack, &top, c - '0');
        }
        else
        {
            int b = pop(stack, &top);
            int a = pop(stack, &top);
            int result = calculate(a, b, c);
            push(stack, &top, result);
        }
    }

    printf("Postfix Evaluation: %d\n", stack[top]);
}

int main()
{
    char postfix[MAX];
    printf("Enter Postfix Expression: ");
    fgets(postfix, MAX, stdin);
    postfix[strcspn(postfix, "\n")] = '\0';
    evalPostfix(postfix);
    return 0;
}