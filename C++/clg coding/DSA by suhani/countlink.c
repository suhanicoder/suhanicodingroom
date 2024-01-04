#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
    int data;
    struct Node * next;

 };

 /*void linkedlistTraversal(struct Node * ptr)
  {

    while(ptr != NULL)
    {
    printf(" Element : %d\n", ptr->data);
    ptr = ptr->next;
    }
  }*/

  void getlength()
  {

   int count=0;

   struct Node * ptr;
   struct Node * head;
   ptr = head;

   while(ptr != NULL)
   {
    count++;
    ptr = ptr->next;
    
   }
   return (count); 
   printf("length is %d",count);
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


    getlength();
    //linkedlistTraversal(head);
   
   return 0;

  }

  