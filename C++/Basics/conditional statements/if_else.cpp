//20 August 2023 self practice
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers ";
    cin>>num1>>num2>>num3;
    if (num1>num2)
    {
        cout<<num1<<" is greater";
    }
    else if (num3<num2)
    {
        cout<<num2<<" is greater";
    }
    else
    {
        cout<<num3<<" is greater ";
    }
    return 0;
}