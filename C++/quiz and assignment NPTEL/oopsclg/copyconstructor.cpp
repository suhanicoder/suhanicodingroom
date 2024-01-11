#include<iostream>
using namespace std;

class Alpha
{
    int data;
    public:
     Alpha()   //default
     {
        data=0;
     }

     Alpha(int d)  // parametrized constructor
     {
        data = d;

     }

     Alpha(Alpha &a)  //copy constructor
     {
        data = a.data;
        cout<<"the copy constructor called"<<endl;

     }

     void display()
     {
             cout<<data<<endl;
     }

};
int main()
{
    Alpha a1(37);
    Alpha a2(a1);
    a2.display();
    Alpha a3;
    a3 = a1;
    a3.display();

}
