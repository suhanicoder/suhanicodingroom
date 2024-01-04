#include <iostream>
using namespace std;

int calculate(int s);
int calculate(int,int);
int calculate(int,float);
 
 int calculate(int s)
 {
    
    return (s*s);
 }

 int calculate(int a,int b)
 {
    return (a*b);
 }

 int calculate(int a,float b)
 {
    return  ((a*b)/2);
 }


 
 


int main()
{

    int x,y,result;
    float z=0;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    result= calculate(x);
    cout<<"the area of square is "<< result<<endl;

    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    result= calculate(x,y);
    cout<<"the area of rectangle is "<< result<<endl;

    cout<<"enter the value of x and z"<<endl;
    cin>>x>>z;

    result= calculate(x,z);
    cout<<"the area of triangle is "<< result<<endl;
     
  
 
    
    return 0;
}