#include<iostream>
using namespace std;

int a; //Global variable

//syntax of defining function return by reference

int &retback()
{
    return a;
}

int main()
{
    retback() = 40; // syntAX OF CALLING A FUNCTION RETURN BY REFERENCE
    cout<<a;
    return 0;
}