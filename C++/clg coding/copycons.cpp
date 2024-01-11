#include<iostream>
using namespace std;

class alpha
{
    private:
       int data;

    public:
      alpha()
      {
        data = 0;
      } 
      
      alpha(int a)
      {
         data = a;
      }

      alpha(alpha &d)
      {
        data = d.data;
      }

      void displaydata()
      {
        cout<<"the value of d is "<<data<<endl;
        
      }

      int main()
      {
        alpha a1;
        alpha a2(a1);
        a2.displaydata();
        
        alpha a3;
        a3 = a1;
        a3.displaydata();
        


      }



};