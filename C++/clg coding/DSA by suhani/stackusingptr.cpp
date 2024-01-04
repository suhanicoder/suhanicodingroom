#include<stdio.h>
# define N 100

struct stack
{
    
    int top=-1;
    int stack[N];
};

struct stack stk;
struct stack *ptr=&stk;

int push(int x)
{
    if(ptr->top==N-1)
    {
        printf("stack overflow\n");


    }

    else{
        ptr->top++;
        ptr->stack[ptr->top]=x;
    }
}

void pop()
{
    if(ptr->top==-1)
    {
        printf("stack underflow\n");
    }
    else{
      
      printf("popped item is %d\n",ptr->stack[ptr->top]);
      ptr->top--;
    }
}

void peek()
{
    printf("top item is %d\n",ptr->stack[ptr->top]);
}

void display()
{
    for(int i=ptr->top;i>=0;i--)
    {
        printf("%d      ",ptr->stack[i]);
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



