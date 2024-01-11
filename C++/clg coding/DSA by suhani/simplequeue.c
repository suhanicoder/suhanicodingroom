#include<stdio.h>
# define N 100

int queue[N];
int front = -1,rear = -1;

void enqueue(int x)
{
    if(rear == N-1)
    {
        printf("queue is full\n");
    }
    else if(front == -1 && rear == -1)
    {
      front=0;
      rear=0;
      queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
} 

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");

    }
    else
    {
        printf("dequeue item is : %d\n",queue[front]);
        front++;

    }
}

void peek()
{
    printf("Top item is : %d\n",queue[front]);

}

void display()
{
    for(int i= front;i<=rear;i++)
    {
        printf("%d  ",queue[i]);
    }
}

int main()
{
    enqueue(3);
    enqueue(5);
    enqueue(7);
    enqueue(8);
    enqueue(80);
    display();
    dequeue();
    display();
    peek();
    return 0;
}