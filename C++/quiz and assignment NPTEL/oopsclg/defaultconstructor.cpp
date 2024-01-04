#include <iostream>
using namespace std;

class Distance
{

private:
    int feet = 0;
    float inch = 0;

public:

 Distance();
 Distance(int x,float y);
 void showdata();
};

Distance::Distance()  // default constructor
{
    cout<<"default constructor is called"<<endl;
}

Distance::Distance(int x,float y) //parametrized constructor
{
    feet = x;
    inch = y;
}

void Distance::showdata()
{
  cout<<"the value of feet is "  <<feet<<"  and  "<<"inch is "<<inch<<endl;

}

int main()
{
    Distance d1,d2;
    Distance d3 = Distance(8,6.5);  //explicitly call of constructor
    d3.showdata();
    Distance d5(7,6.8);  // implicitly call of constructor
    d5.showdata();

    Distance d6= Distance(9,2.5);
    d6.showdata();
   // Distance d4(10,3.5);
    //d4.showdata();
}

