#include<iostream>
using namespace std;

void SI(float p,int t=1,float r=7.8)
{
    float si = (p*r*t)/100;
    cout<<"the total amount to be paid is "<<si + p<<endl;

}

int main()
{
    SI(1000);
    SI(1000,4);
    SI(1000,4,9);
    return 0;
}