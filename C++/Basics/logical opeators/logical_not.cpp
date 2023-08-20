//20 August 2023 self practice
//logical not ! makes  the true condition false and vice versa
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age \n";
    cin>>age;
    if(!(age>18))
    {
        cout<<"Not Eligible to vote";
    }
    else
    {
        cout<<"Eligible to vote";
    }
    return 0;
}
