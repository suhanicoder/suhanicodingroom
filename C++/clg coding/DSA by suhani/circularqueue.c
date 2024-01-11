#include<stdio.h>
# define N 100

int queue[N];
int front=-1,rear=-1;

void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else if((rear + 1) % N == front)
    {
        printf("queue is full\n");

    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear]=x;    
    }    
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
       printf("queue is empty\n");
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;

    }
    else
    {
        front = (front + 1) % N;
    }
}

void display()
{
    int i = front;
    if(front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        while(i!=rear)
        {
            printf("%d   ",queue[i]);
            i = (i+1) % N;
        }
        printf("%d",queue[rear]);
    }
}
int main()
{
    enqueue(5);
    enqueue(50);
    enqueue(51);
    enqueue(52);
    enqueue(53);
    enqueue(54);
    enqueue(55);
    enqueue(56);
    enqueue(57);
    enqueue(58);
    enqueue(59);
    enqueue(60);
    enqueue(511);
    dequeue();
    display();
    return 0;

}