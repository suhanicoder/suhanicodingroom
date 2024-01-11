#include <iostream>
using namespace std;

class Alpha
{
    int data;

public:
    Alpha()
    {
        data = 0;
    }

    Alpha(int d)
    {
        data = d;
    }

    Alpha(Alpha &a)
    {
        data = a.data;
        cout << "The copy constructor called " << endl;
    }

    void display()
    {
        cout << data << endl;
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