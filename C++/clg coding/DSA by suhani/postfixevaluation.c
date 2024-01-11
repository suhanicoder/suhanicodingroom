#include<stdio.h>
#include<math.h>
#include<ctype.h>
#define N 30

int stack[N];
int top = -1;

void push(int x)
{
    if(top == N-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }    
}

int pop()
{
    if(top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        return stack[top--];
    }
}

int peek()
{
    return stack[top];
}
void evaluate(char exp[])
{
    int a,b;
    for(int i=0;exp[i] != '\0';i++)
    {
        if(isdigit(exp[i]))
           push(exp[i]-'0');

        switch(exp[i])
        {
        case '+':
           a =  pop();
           b =  pop();
           push(b+a);
           break;

        case '-':
           a = pop();
           b = pop();
           push(b-a);
           break;

        case '*':
           a = pop();
           b = pop();
           push(b*a);
           break;

        case '/':
           a = pop();
           b = pop();
           push(b/a);
           break;

        default:
           break;
        }
    }

    printf("the value of expression is %d",pop());
}

int main()
{
    char postfix[30];
    printf("enter the postfix expression");
    scanf("%s",&postfix);
    evaluate(postfix);

    return 0;
}