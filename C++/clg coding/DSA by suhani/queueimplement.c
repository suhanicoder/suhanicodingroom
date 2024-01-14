#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node*front=0;
struct node*rear=0;
void insert(int x)
{
    struct node*ptr;

    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    if(ptr==0)
    {
        printf("OVERFLOW\n");
    }
    else
    {
    
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
            rear=ptr;
            rear->next=0;
        }
    }    
}
void delete()
{
  struct node*ptr;
  if(front==0)
  {
    printf("underflow\n");
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
    if(front == 0)
    
    {
        printf("Empty queue\n");
    }
    else
    {
        while(ptr!=0)
        {
            printf("%d   ",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
   insert(4);
   insert(5);
   insert(9);
   display();
   delete();
   display();

}




