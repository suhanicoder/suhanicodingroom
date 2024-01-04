#include<stdio.h>
# define N 100

int stack[N];
int top = -1;

void push(int x)
{
    if(top==N-1)
    {
        printf("stackoverflow");
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
        printf("stack underflow");
    }

    else
    {
        
        printf("popped item : %d\n",stack[top]);
        top--;
    }
}
void peek()
{
    printf("Top item is : %d\n",stack[top]);
}
 void display()
 {
    for(int i= top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
 }
 int main()
 {
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    pop();
    peek();
    pop();
    push(67);
    display();
    return 0;



 }
