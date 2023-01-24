#include<iostream>
using  namespace std;
int main()
{
    int x=9;
    float y=88.35;
    //alias means a variable having different names.
    //aliasing here at bottom.
    int &xRef=x;
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    xRef++;
    cout<<"x="<<x<<endl<<"y="<<y<<endl;    
}