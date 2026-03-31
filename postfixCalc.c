#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val)
{
    stack[++top] = val;
}

int pop()
{
    return stack[top--];
}

int applyOp(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}

int evaluatePostfix(char *expr)
{
    for (int i = 0; i < strlen(expr); i++)
    {

        if (expr[i] == ' ')
            continue;

        if (isdigit(expr[i]))
        {
            int val = 0;

            while (i < strlen(expr) && isdigit(expr[i]))
            {
                val = val * 10 + (expr[i] - '0');
                i++;
            }

            push(val);
            i--;
        }
        else
        {
            int b = pop();
            int a = pop();
            push(applyOp(a, b, expr[i]));
        }
    }

    return pop();
}

int main()
{
    char expr[MAX];

    printf("Enter postfix expression: ");
    fgets(expr, MAX, stdin);

    printf("Result = %d\n", evaluatePostfix(expr));
    return 0;
}