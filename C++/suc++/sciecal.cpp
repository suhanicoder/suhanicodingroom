#include<iostream>
#include<math.h>

using namespace std;
int main()
{
  int opt;
  char ch='y';
  while(ch=='y'|| ch=='Y')
  {
    cout<<"select operations\n";
    cin>>opt;
    cout<<"Enter a number in radian";
    int a;
    cin>>a;
    
    switch (opt)

    {
        case 1:
          cout<<asin(a);
          break;
        case 2:
          cout<<acos(a);
          break;
        case3:
          cout<<atan(a);
          break;
          case4:
          cout<<sin(a);
          break;
          case5:
          cout<<cos(a);
          break;
          case6:
          cout<<tan(a);
          break;

          default:
          cout<<"please select the correct operation\n";
          break;
    }


    cout<<"Do you want to run again.Enter 'y' for yes and 'n' for exit \n";


         cin>>ch;
         if(ch=='n' || ch=='N')
          {
            break;
          }

    } 
  