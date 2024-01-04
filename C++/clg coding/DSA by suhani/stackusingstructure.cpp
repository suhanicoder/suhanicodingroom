#include<stdio.h>
# define N 100

struct stack
{
    int top=-1;
    int stack[N];
};

struct stack stk;

int push(int x)
{
    if(stk.top==N-1)
    {
        printf("stack overflow\n");
    }
    else{

    stk.top++;
    stk.stack[stk.top]=x;

    }
}

void pop()
{
    if(stk.top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {   
        printf("popped element is %d\n",stk.stack[stk.top]);
        stk.top--;
        
    }

}

void peek()
{
    printf("the top item is %d\n",stk.stack[stk.top]);
}

void display()
{
  for(int i=stk.top;i>=0;i--)
  {
    printf("%d   ",stk.stack[i]);
  }
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








