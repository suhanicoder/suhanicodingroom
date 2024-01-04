#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node*link;
   
}*top=0;

void push(int x)
{
    struct node*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;

}

void display()
{
    struct node *temp;
    temp = top;
    if(top==0)
    {
        printf("empty stack\n");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d   ",temp->data);
            temp=temp->link;
        }
        printf("\n");
    }

}
void peek()
{
    if(top==0)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("Top item is : %d\n",top->data);
    }
}

void pop()
{
    struct node*temp;
    temp=top;
    if(top==0)
    {
        printf("stack underflow\n");
    }
    else{
      printf("popped item is :  %d\n",top->data);
      top=top->link;
      free(temp);
    }
}

int main()
{
    push(9);
    push(2);
    push(5);
    push(10);
    peek();
    display();
    pop();
    display();
    return 0;
}



    



