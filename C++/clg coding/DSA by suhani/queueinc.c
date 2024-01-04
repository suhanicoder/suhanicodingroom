#include<stdio.h>
#define N 100
int queue[N];
 int front=-1;
 int rear = -1;
void enqueue(int x)
{
    if(rear==N-1)
     printf("overflow");

     else if(front == -1 && rear==-1)
     {
        front=0;
        rear=0;
        queue[rear]=x;
     }

     else
     {
        rear++;
        queue[rear] = x;
     }


}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow\n");
    }
    else if(front == rear)
        {
            front = -1;
            rear = -1;

        }
    else
    {
        
        front++;
    }

    }

    void display()
    {
        if(front == -1 && rear==-1)
        {
            printf("underflow\n");
        }
        else
        {
          for(int i=front;i<=rear;i++)
          {
             printf("%d   ",queue[i]);

          }
          printf("\n");
        }

        }
        
        void peek()
        {
            if(front == -1 && rear == -1)
            {
                printf("underflow\n");

            }

         else{
            printf("%d\n",queue[front]);
         }
        }
    int main()
    {
        enqueue(6);
        enqueue(61);
        enqueue(5);
        enqueue(4);
        enqueue(50);
        display();
        dequeue();
        display();
        peek();


        
        
        
        
        
    }





 

