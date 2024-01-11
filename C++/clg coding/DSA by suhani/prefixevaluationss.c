#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define N 30

int stack[N];
int top = -1;

void push(int x)
{
    if(top == N-1)
    {
        printf("Stack overflow\n");
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
        printf("Stack underflow\n");
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
    int index=0;
    while(exp[index]!='\0')
    {
        index++;
    }

    int a,b;
    for(int i=index-1;i>=0;i--)
    {
        if(isdigit(exp[i]))
            push(exp[i]-'0');

        switch(exp[i])
        {
            case '+':
               a=pop();
               b=pop();
               push(a+b);
               break;

            case '-':
               a=pop();
               b=pop();
               push(a-b);
               break;
            case '/':
               a=pop();
               b=pop();
               push(a/b);
               break;

            default:
               break;
        }

    }

    printf("the value of expression is %d",pop());
}

int main()
{
    char prefix[30];
    printf("Enter the prefix expression");
    scanf("%s",&prefix);
    evaluate(prefix);




    return 0;
}

