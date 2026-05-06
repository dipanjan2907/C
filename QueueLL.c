#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int val;
    struct Node *next;
} Node;
Node *front = NULL;
Node *rear = NULL;

Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory Allocation Failed");
        exit(1);
    }
    newNode->val = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(int data)
{
    Node *newNode = createNode(data);
    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow \n");
        return -1;
    }
    Node *temp = front;
    int data = temp->val;
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
    return data;
}

void display()
{
    if (front == NULL)
    {
        printf("Queue Underflow \n");
        return;
    }
    Node *temp = front;
    printf("Queue: \n");
    while (temp != NULL)
    {
        printf("%d, ", temp->val);
        temp = temp->next;
    }
    printf(" \n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("Deleted: %d\n", dequeue());
    display();
    return 0;
}