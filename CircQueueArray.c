#include <stdio.h>
void enque(int q[], int *front, int *rear, int size)
{
    if ((*rear + 1) % size == *front)
    {
        printf("Queue Overflow!\n");
        return;
    }
    if (*front == -1)
        *front = 0;
    *rear = (*rear + 1) % size;
    printf("Enter element: ");
    scanf("%d", &q[*rear]);
}
void deque(int q[], int *front, int *rear, int size)
{
    if (*front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Popped: %d\n", q[*front]);
    if ((*front == *rear))
        *front = *rear = -1;
    else
        *front = (*front + 1) % size;
}
void display(int q[], int front, int rear, int size)
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    while (1)
    {
        printf("%d ", q[i]);
        if (i == rear)
            break;
        i = (i + 1) % size;
    }
    printf("\n");
}
int main()
{
    int size = 5;
    int q[size];
    int front = -1, rear = -1;

    enque(q, &front, &rear, size);
    enque(q, &front, &rear, size);
    enque(q, &front, &rear, size);
    enque(q, &front, &rear, size);

    printf("\nAfter inserting 4 elements:\n");
    display(q, front, rear, size);

    deque(q, &front, &rear, size);
    deque(q, &front, &rear, size);
    printf("\nAfter removing 2 elements:\n");
    display(q, front, rear, size);

    enque(q, &front, &rear, size);
    enque(q, &front, &rear, size);
    printf("\nAfter inserting 2 more elements:\n");
    display(q, front, rear, size);

    return 0;
}