// wap to implement queue using array

#include <stdio.h>
#include <stdlib.h>

#define maxsize 5
void enqueue();
void dequeue();
void display();
int front = -1, rear = -1;
int queue[maxsize];

int main()
{
    int choice;
    while (choice != 4)
    {
        printf("\n\nMain Menu");
        printf("\n1. insert an element\n2. Delete an element\n3. Display the queue\n4. exit\n");
        printf("\nEnter your choice?: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nEnter valid choice??\n");
        }
    }
    return 0;
}

void enqueue()
{
    int item;
    printf("\nEnter the element: ");
    scanf("\n%d", &item);
    if (rear == maxsize - 1)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    queue[rear] = item;
    printf("\nValue inserted.");
}

void dequeue()
{
    int item;
    if (front == -1 || front > rear)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
        printf("\nvalue deleted.");
    }
}

void display()
{
    int i;
    if (rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nprinting values .....\n");
        for (i = front; i <= rear; i++)
        {
            printf("\n%d\n", queue[i]);
        }
    }
}
