#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

void push(char stack[], int *top, char elem)
{
    stack[++(*top)] = elem;
}

char pop(char stack[], int *top)
{
    return stack[(*top)--];
}

char peek(char stack[], int top)
{
    return stack[top];
}

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

void infixToPostfix(char infix[])
{
    char stack[MAX];
    char postfix[MAX];
    int top = -1, k = 0;

    for (int i = 0; infix[i] != '\0'; i++)
    {
        char c = infix[i];

        // Operand
        if (isalnum(c))
        {
            postfix[k++] = c;
        }

        else if (c == '(')
        {
            push(stack, &top, c);
        }
        else if (c == ')')
        {
            while (top != -1 && peek(stack, top) != '(')
            {
                postfix[k++] = pop(stack, &top);
            }
            pop(stack, &top); // remove '('
        }

        // Operator
        else
        {
            while (top != -1 && precedence(peek(stack, top)) >= precedence(c))
            {
                postfix[k++] = pop(stack, &top);
            }
            push(stack, &top, c);
        }
    }

    // Pop remaining
    while (top != -1)
    {
        postfix[k++] = pop(stack, &top);
    }

    postfix[k] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

int main()
{
    char infix[MAX];
    printf("Enter Infix Expression: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0';
    infixToPostfix(infix);
    return 0;
}