//21 August 2023
//greatest of three numbers using conditional numbers
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three nummbers   \n";
    cin>>a>>b>>c;
    ((a>b) && (a>c))?cout<<a<<" is greater":(b>c && b>a)?cout<<b<<" is greater":cout<<c<<" is greater";
}