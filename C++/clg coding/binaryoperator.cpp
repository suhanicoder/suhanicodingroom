#include<iostream>
using namespace std;

class Distance
{   
    private:
    int feet;
    float inch;

    public:
    
    Distance();
    Distance(int a,float b);
    Distance operator+(Distance);
    Distance operator+(int);
    void Displaydata();
};

Distance::Distance()
{
    feet = 0;
    inch = 0;
}

Distance:: Distance(int a,float b)
{
   feet = a;
   inch = b;
}

Distance Distance :: operator+(Distance a)
{
    Distance temp;
    temp.inch = inch+a.inch;
    temp.feet=feet+a.feet;

    while(temp.inch>=12)
    {
       temp.feet++;
       temp.inch = temp.inch - 12;
       
    }

    return temp;

} 

Distance Distance:: operator+(int d)
{
    Distance temp;
    temp.inch = inch + d;
    temp.feet= feet + d;

    while(temp.inch>=12)
    {
        temp.feet++;
        temp.inch=temp.inch - 12;

    }
    return temp;
}

void Distance::Displaydata()
{
   cout<<"distance is  "<<feet<< " ft " <<inch<<" inch"<<endl;
}

int main()
{
    Distance d1(10,8.5),d2(15,5.5),d3;
    d3 = d1 + d2;
    d3.Displaydata();
    d3 = d3 + 10;
    d3.Displaydata();

    return 0;
}











       
      
