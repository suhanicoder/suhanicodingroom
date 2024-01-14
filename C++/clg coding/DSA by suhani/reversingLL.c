#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
   struct node *next;
}*head=0;

void insert_node(int data)
{
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next =  head;
    head=newnode;

}

void print_node()
{
   struct node*temp;
   while(temp!=0)
   {
    printf("%d  ",temp->data);
    temp = temp->next;
   }
   printf("\n");
}

 void reverse_linkedlist()
{
   struct node*temp,*curnode,*prevnode,*nextnode;
   prevnode=0;
   curnode=temp;
   while(curnode)
   {
      nextnode=curnode->next;
      curnode->next=prevnode;
      prevnode=curnode;
      curnode=nextnode;

   }
   head = prevnode;


}

int main()
{
   insert_node(5);
   insert_node(60);
   insert_node(34);
   insert_node(90);

   print_node();
   reverse_linkedlist();
   print_node();
   return 0;
}