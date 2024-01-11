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

    linkedlistTraversal(head);
    
    struct Node*ptr = head;
    int sum = 0;
    while(ptr!=NULL)
    {
      sum = sum + ptr->data;
      ptr = ptr->next;
    }
    printf("The sum of elements is %d\n",sum);
    


    return 0;
  }


 