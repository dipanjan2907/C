#include <stdio.h>
void enqueue(int q[], int *front, int *rear, int size)
{
    if (*rear == size - 1)
    {
        printf("Queue Overflow! \n");
        return;
    }
    if (*front == -1)
        *front = 0;
    (*rear)++;
    printf("Enter element to insert in QUEUE: ");
    scanf("%d", &q[*rear]);
}
void dequeue(int q[], int *front, int *rear)
{
    if (*front == -1 || *front > *rear)
    {
        printf("Queue Underflow! \n");
        return;
    }
    printf("Popped Element: %d\n", q[*front]);
    (*front)++;
    if (*front > *rear)
    {
        *front = *rear = -1;
    }
}
void display(int q[], int front, int rear)
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty!\n\n");
        return;
    }
    printf("\nQUEUE: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", q[i]);
    printf("\n\n");
}
int main()
{
    int size, rear = -1, front = -1;
    printf("Enter size of QUEUE: ");
    scanf("%d", &size);
    int q[size];
    int ch = 1;
    while (ch != 0)
    {
        printf("0. Exit\n1. Insert\n2. Delete\n3. Display\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return 0;
        case 1:
            enqueue(q, &front, &rear, size);
            break;
        case 2:
            dequeue(q, &front, &rear);
            break;
        case 3:
            display(q, front, rear);
            break;
        default:
            printf("INVALID CHOICE\n\n");
            break;
        }
    }
}