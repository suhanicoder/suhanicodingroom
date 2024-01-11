#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define max 50

int top = -1,front = 0;
int stack[max];
void push(char);
void pop();



void main()
{
    int i,choice;
    char s[max],b;
    while(1)
    {
        printf("Enter the string\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               printf("Enter the string\n");
               scanf("%s",&s);
               for(i=0;s[i]!='\0';i++)
               {
                  b = s[i];
                  push(b);
               }
               for(i = 0;i<(strlen(s))/2;i++)
               {
                if(stack[top]== stack[front])
                {
                   pop();
                   front++;
                }
                else
                {
                    printf("%s is not a palindrone\n",s);
                    break;
                }

               }

               if((strlen(s)/2) == front)
               
                 printf("%s is a palindrone\n",s);
                 front = 0;
                 top = -1;
                 break;
               
               case 2:
                  exit(0);

               default:
                 
                    printf("enter correct choice\n");
                    

        }
    }
}

void push(char a)
{
    top++;
    stack[top]=a;
}

void pop()
{
   top--;
}

