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
   //case:1
  /*struct Node * insertAtFirst(struct Node *head,int data)
  {
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;

  } */


   //case:2
 /* struct Node * insertAtIndex(struct Node * head,int data,int index)
  {
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;

    int i = 0;

    while(i!= index - 1)
    {
      p = p->next;
      i++;
    }

    ptr->data = 56;
    ptr->next = p->next;
    p->next = ptr;
    return head;
  }*/



  //case : 3

  struct Node * insertAtEnd(struct Node *head,int data)
  {
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   
    ptr->data = data;
    struct Node * p = head;

    while(p->next!= NULL)
    {
      p = p->next;

    }
      p->next = ptr;
      ptr->next = NULL;
      
      return head;

  }

  //case:4

   struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data)
   {
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
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

   
   
    printf("Linked list before insertion\n");
    linkedlistTraversal(head);
   // head = insertAtFirst(head,56);
    //head = insertAtIndex(head, 56, 1);
     head = insertAfterNode(head, third , 45);
    printf("\nLinked list after insertion\n");
    //head = insertAtEnd(head, 56);
    linkedlistTraversal(head);
    return 0;

    

  }
  




  

   

  










  





  

