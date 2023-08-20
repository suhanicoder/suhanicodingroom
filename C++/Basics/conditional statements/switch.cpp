//20 August 2023 self practice
//simple calcullator
#include <iostream>
using namespace std;
int main()
{
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    int opt;
  
    char ch='y';
    while(ch=='y' || ch=='Y')
    
    {
        cout<<"Select Operations \n>>>";
        cin>>opt;
        cout<<"Enter two numbers ";
        int a,b;
        cin>>a>>b;
        
        switch (opt)
        {
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        case 4:
            cout<<a/b;
            break;
        
        default:
            cout<<"\nPlease select correct Opeartion";
            break;
        }
        cout<<"\nDo you want to run again. Enter 'y' for Yes and 'n' for exit \n>>>";
        cin>>ch;
        if (ch=='n' || ch=='N')
        {
            break;
        }
    }
}
