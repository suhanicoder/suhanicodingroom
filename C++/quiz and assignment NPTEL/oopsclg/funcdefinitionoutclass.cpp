#include<iostream>
using namespace std;

class Distance{
    private:
    int feet = 0;
    int inch = 0;

    public:
    void getdata();
    void setdata(int a,float b);
    void showdata();

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

int main()
{
    Distance d1,d2;
    d1.getdata();
    d2.setdata(10,9);
    d1.showdata();
    d2.showdata();

}