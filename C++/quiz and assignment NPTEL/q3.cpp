#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s="Programming in modern c++";
    cout<<s.size();
    cout<<strlen(s); //line 2
    cout<<s.length();
    cout<<strlen(s.c_str());
    return 0;
    
}
// error at line 2