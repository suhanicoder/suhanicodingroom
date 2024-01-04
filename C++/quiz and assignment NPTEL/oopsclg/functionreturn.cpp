#include<iostream>
using namespace std;

// function returning more than one values
void returnback(int a,int b,int &c,int &d)
{
    c = a + b;
    d = a - b;

}
 int main()
{

  int a=0,b=0,c=0,d=0;
  cout<<"Enter the values for a and b \n ";
  cin>>a>>b;
  returnback(a,b,c,d);  // calling function
  cout<<"the sum of A and B is "<< c << endl;
  cout<<"the difference of A and B is "<<d<< endl;

  return 0;
}

