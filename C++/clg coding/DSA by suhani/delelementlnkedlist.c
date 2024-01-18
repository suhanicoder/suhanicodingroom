#include<stdio.h>
# include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*head=0;



void insert(int x)
{
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    head = newnode;
}

void display()
{
    struct  node*temp;
     temp = head;
     if(temp==0)
     {
        printf("Linked list is empty\n");
     }
    while(temp!=0)
    {
       printf("%d  ",temp->data);
       temp = temp->next;
    }
    printf("\n");
    
}

void delete(int key)
{
    struct node*temp,*prev;
    prev = head;
    temp = head;

    if(prev==0)
    {
        printf("Empty list\n");
    }

    else if(prev->data==key)
    {
       struct node *temp;
       temp = head;
       head = temp->next;
       free(temp);

    }
        else if(prev->next->data==key)
        {
            prev->next=prev->next->next;
        }
        
        else
        {
           temp = prev->next;
           while(temp!=0)
           {
            if(temp->next->data==key)
            {
               prev = temp;
               temp = temp->next;
               break;
            }
            else
            temp = temp->next;
           
        }

        prev->next=temp->next;
        free(temp);
}
}

int main()
{
    insert(4);
    insert(40);
    insert(47);
    insert(50);
    insert(30);
    insert(20);
    insert(10);
    insert(11);
    insert(12);
    insert(13);
    display();
    delete(40);
    display();
    delete(13);
    delete(50);
    display();
    return 0;

}






























