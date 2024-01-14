#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

 int isfull(struct stack * ptr)
 { 
   if(ptr->top == ptr->size - 1)
    return 1;

    else
    return 0; 
 }

 int isempty(struct stack * ptr)
 {
    if(ptr->top == -1)
     return 1;

     else
     return 0;

 }

 void push(struct stack *ptr,int val)
{
    if(isfull(ptr))
    {
        printf("stack overflow : cannot push %d to the stack\n",val);

    }

    else{
       ptr->top++;
       ptr->arr[ptr->top] = val;
    }
}

 int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        printf("stack underflow : cannot pop from the stack\n");
        return -1;

    }

    else{

       int val =  ptr->arr[ptr->top];
       ptr->top--;
       return val;
       
    }
}



int main()
{
   struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
   sp->size = 10;
   sp->top = -1;
   sp->arr = (int *)malloc(sp->size * sizeof(int));
   printf("stack has been created successfully\n");
   printf("Before pushing : %d\n",isfull(sp));
   printf("Before pushing  :%d\n",isempty(sp));
   push(sp,56);
   printf("%d\n",isfull(sp));
   printf("%d\n",isempty(sp));
   push(sp,3);
    push(sp,75);
    push(sp,65);
    push(sp,56);
    push(sp,1);
    push(sp,5);
    push(sp,56);
    push(sp,57);
    push(sp,58);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
   printf("After pushing : %d\n",isfull(sp));
   printf("After pushing  :%d\n",isempty(sp));
   printf("popped %d from the stack\n",pop(sp));//last in first out
   printf("popped %d from the stack\n",pop(sp));//last in first out
   printf("popped %d from the stack\n",pop(sp));//last in first out


   return 0;

}


