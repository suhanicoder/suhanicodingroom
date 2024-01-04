#include<stdio.h>

struct student
{
    char name;
    int std;
    char sec;
};

int main()
{
   struct student s1;
   int m1,e1,h1,sc1,s01;

   printf("Jawahar Navodaya Vidyalaya\n");
   printf("Annual Report Card\n");
      
   /* printf("enter the name of the student\n");
    scanf("%s",&s1.name);
    printf("Name: %s\n",s1.name);*/
    printf("enter the standard of student\n");
    scanf("%d",&s1.std);
    printf("Standard: %d\n",s1.std);
    printf("enter the section of student\n");
    scanf("%s",&s1.sec);
    printf("Section: %s\n",s1.sec);
    
    printf("Marks secured out of 100\n");
    printf("marks obtained by student in mathematics\n");
    scanf("%d",&m1);
    printf("Mathematics: %d\n",m1);
    
    printf("marks obtained by student in English\n");
    scanf("%d",&e1);
    printf("English: %d\n",e1);
    printf("marks obtained by student in Hindi\n");
    scanf("%d",&h1);
    printf("Hindi: %d\n",h1);
    printf("marks obtained by student in science\n");
    scanf("%d",&sc1);
    printf("Science: %d\n",sc1);
    printf("marks obtained by student in social science\n");
    scanf("%d",&s01);
    printf("Social Science: %d\n",s01);

    int total_marks = m1+e1+h1+sc1+s01;
    printf("Total marks secured: %d\n",total_marks);

    if(total_marks>450 && total_marks<=500)
    {
        printf("Grade: A");
    }
    
    else if(total_marks>=400 && total_marks<=449)
    {
         printf("Grade: B");
    }
    
    else if(total_marks>=350 && total_marks<=399)
    {
         printf("Grade: C");
    }

    else if(total_marks>=300 && total_marks<=349)
    {
         printf("Grade: D");
    }
    else if(total_marks>=200 && total_marks<=299)
    {
         printf("Grade: E");
    }

    else
    {
        printf("fail");
    }
    
    /*else(total_marks>=0 && total_marks<200)
    {
       printf("Grade: F");
     
    }*/
         
    

}


    

    


