#include<iostream>
using namespace std;

class Distance
{
    private:
     int feet = 0;
     int inch = 0;
    public :
      void getdata()
      {
        cout<<"Enter the value of feet and inch"<<endl;
        cin>>feet>>inch;

      }

      void setdata(int a,float b)
      {
        feet = a;
        inch = b;
      }

      void showdata()
      {
        cout<<"the distance is "<<feet<<" ft "<<inch<<" inch "<<endl;  

      }

};
int main()
{
    Distance d1,d2;
    d1.getdata();
    d2.setdata(7,9.6);
    d1.showdata();
    d2.showdata();
    return 0;
}

