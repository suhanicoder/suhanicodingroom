#include <stdio.h>
#include <stdlib.h>
#define size 5

int stack[size];
int top = -1;



void push(int x)
{
    if (top == size - 1)
    {
        printf("overflow");
    }

    else
    {
        
        
        top++;
        stack[top]=x;
        
    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }

    else
    {
        printf("popped item : %d\n",stack[top]);
        top--;
    }
}
void peek()
{
    printf("top item : %d\n",stack[top]);

}

void display()
{
    for(int i=top; i>=0;i--)
    {
       printf("%d",stack[i]);
       printf("\n");
    }
}

int main()
{
    push(23);
    push(56);
    push(45);
    display();
    pop();
    peek();
    display();
}
