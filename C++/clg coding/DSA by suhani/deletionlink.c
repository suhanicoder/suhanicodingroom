#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
     
};

 void linkedlistTraversal(struct Node * ptr)
  {

    while(ptr != NULL)
    {
    printf(" Element : %d\n", ptr->data);
    ptr = ptr->next;
    }
  }

  //case 1: Deleting the first element from the linked list

  struct Node * deleteFirst(struct Node * head)
  {
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
  }

   //case 2: Deleting the element at a given index from the linked list
   
    struct Node * deleteAtIndex(struct Node * head, int index)
    {
        struct Node * p = head;
        struct Node * q = head->next;
        for(int i = 0; i< index-1;i++)
        {
            p = p->next;
            q = q->next;
            
        }

        p->next = q->next;
        free(q);
        return (head);


        
    }
     //case 3: Deleting the last element  from the linked list

     struct Node * deleteAtLast(struct Node * head)
    {
        struct Node  * p = head;
        struct Node * q = head->next;
        while(q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }

        p->next = NULL;
        free(q);
        return head;

    }

    // case 4:  Deleting the element with a given value from the linked list
    
    struct Node * deleteAtValue(struct Node * head, int value)
    {
        struct Node * p = head;
        struct Node * q = head->next;
         
    while(q->data!=value && q->next!= NULL)
        {
            p = p->next;
            q = q->next;
        }

        if(q->data == value)
         {
            p->next = q->next;
            free(q);
            return(head);
         }        
    }




  int main()
  {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;


    //Allocate memory for nodes in the linked list in Heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node)); 
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second node

    head->data = 7;
    head->next = second;

    //Link second and third node

    second->data = 11;
    second->next = third;

    //Link third and fourth data

    third->data = 64;
    third->next = fourth;
    
    //Link fourth and fifth data

    fourth->data = 92;
    fourth->next = fifth;

    //Terminate the linked list at the fifth node

    fifth->data = 94;
    fifth->next = NULL;
    printf("Linked list before deletion\n");
    linkedlistTraversal(head);

    // head = deleteFirst(head); // for deleting first element in the linked list

    //head = deleteAtIndex(head, 3); // for deleting element at any index

    // head= deleteAtLast(head); // deleting the last element from the linked list

    head = deleteAtValue(head,64);
    printf("Linked list after deletion\n");
    linkedlistTraversal(head);

    return 0;
  }















