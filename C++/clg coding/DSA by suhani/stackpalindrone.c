#include<stdio.h>
#include<string.h>
# define N 50

char stack[N];
int top=-1;

void push(char x)
{
    if(top==N-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

char pop()
{
    return  stack[top--];

}

void palindrone(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        push(str[i]);

    }
    int flag=-1;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=pop())
        {
            flag=0;
            break;
        }
        

    }

    if(flag==-1)
    {
        printf("string is palindrone\n");
    }
    else
    {
        printf("string is not a palindrone\n");
    }

}

int main()
{
    char str[30];
    printf("enter a string\n");
    scanf("%s",&str);
    palindrone(str);

}







