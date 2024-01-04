#include<iostream>
using namespace  std;

class Distance
{
   private:
 
      int feet = 0;
      int inch = 0;

   public:
   
   void getdata();
   void setdata(int a, float b);
   void showdata();
   void adddist(Distance m, Distance n);
};

void Distance::getdata()
{
    cout<<"Enter the value of feet and inch"<<endl;
    cin>>feet>>inch;
}

void Distance::setdata(int a,float b)
{
    feet = a;
    inch = b;

}

void Distance::showdata()
{  
    cout<<"the distance is "<<feet<<" ft "<<inch<<" inch "<<endl;    
}

void Distance::adddist(Distance m,Distance n)
{
    inch = m.inch + n.inch;
    feet = 0;
    while(inch>=12)
    {
        feet++;
        inch = inch - 12;
    }

    feet = feet + m.feet + n.feet;
}

int main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.setdata(10,45);
    d3.adddist(d1,d2);
    d1.showdata();
    d2.showdata();
    d3.showdata();

    
}



 


 







