//Input restricted double ended queue
/* In this Dequeue, Deletion is possble at both the ends front and rear
but the insertion is only possible from rear end*/

#include<stdio.h>
# define N 10

int dequeue[N];
int front = -1,rear = -1;

void enqueuerear(int x)
{
    if((front == 0 && rear == N-1) || (front == rear + 1))
    {
        printf("queue is full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        dequeue[rear]=x;
    }
    else if(rear == N-1)
    {
        rear = 0;
        dequeue[rear] = x;
    }
}

void  dequeuerear()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is in underflow condition\n");
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(rear == 0)
    {
       rear = N-1;
    }
    else
    {
       rear--;
    }
}

void dequeuefront()
{
    if(front == -1 && rear == -1)
    {
        printf("Queue is in underflow condition\n");
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if(front == N-1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void display()
{
    int i=front;
    while(i!=rear)
    {
        printf("%d",dequeue[i]);
        i = (i+1) % N;
    }
    printf("%d  ",dequeue[rear]);

}

int main()
{
    enqueuerear(34);
    enqueuerear(33);
    enqueuerear(35);
    enqueuerear(36); 
    enqueuerear(37);
    enqueuerear(38);
    enqueuerear(39);
    enqueuerear(40);
    enqueuerear(41);
    display();
    dequeuefront();
    display();
    dequeuerear();
    display();
    return 0;
    
}
