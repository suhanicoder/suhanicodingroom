#include<iostream>
using namespace std;

class counter
{
    private:
     int count;

    public:
     counter()
     {
        count = 0;
     }


void displaydata()
{
    cout<<"the value of count variable is "<<count<<endl;
}

counter operator++()
{
    counter temp;
    temp.count = ++count;
    return temp;
}

counter operator++(int)
{
    counter temp;
    temp.count = ++count;
    return temp;
}

};

int main()
{
    counter c1,c2,c3;
    cout<<"object c1 contains"<<endl;

    c1.displaydata();

    cout<<"object c2 contains "<<endl;
    c2.displaydata();

    ++c1;
    ++c2;
    ++c2;
    c3 = ++c2;

    cout<<"the value of c1 is "<<endl;
    c1.displaydata();

    cout<<"the value of c2 is "<<endl;
    c2.displaydata();
   
   cout<<"the value of c3 is "<<endl;
    c3.displaydata();
}
    

    


