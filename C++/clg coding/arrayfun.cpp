#include <iostream>
using namespace std;
 
int sum(int *,int );
int sum(int array[],int n)
{    
    int sum=0;
    for(int i=0;i<n;i++)
    {
         sum=sum + array[i];
    }
  

   return(sum);

}



int main()
{
   int array[50]={0},n=0,result=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"the elements of the array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    result = sum(array,n);
    
   cout<<"the sum of array elements is "<<result<<endl;






}