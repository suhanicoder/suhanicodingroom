#include<stdio.h>
 void convert(int deci)
 {  
     
    int arr[count+1]={0};
    int temp = deci;
    int count = 0;
   
    do
    {
        temp = temp/2;
        count++;
    } while (temp!=0);
    
    
    for(int i=count;i>=0;i--)
    {
        arr[i]=deci%2;
        deci=deci/2;
        if(i==0)
        {
            arr[i]=0;

        }
    }

    for(int i=0;i<count+1;i++)
    {
        printf("%d",arr[i]);
    }

 }
 int main()
 {   int deci;
    printf("Enter the decimal value to convert it into binary form\n");
    scanf("%d",&deci);
    convert(deci);
    return 0;
 }

    
 