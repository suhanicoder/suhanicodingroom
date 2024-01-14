#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node*front;
struct node*rear;
void insert(int x)
{
    struct node*ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    if(front==0)
    {
       front=ptr;
       rear=ptr;
       front->next=0;
       rear->next=0;
    }
    else
    {
        rear->next=ptr;
        rear = ptr;
        rear->next=0;
    }

}

void delete()
{
    struct node*ptr;
    if(front==0)
    {
        printf("Underflow\n");

    }
    else
    {
        ptr=front;
        front=front->next;
        free(ptr);
    }
}

void display()
{
    struct node*ptr;
    ptr = front;
    if(front==0)
    {
        printf("Empty queue\n");
    }
    else
    {
        while(ptr!=0)
        {
            printf("%d  ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
 int main()
 {
    insert(8);
    insert(9);
    insert(10);
    insert(11);
    display();
    delete();
    display();
    delete();
    delete();
    display();
    delete();
    display();
    insert(5);
    display();
    return 0;

 }