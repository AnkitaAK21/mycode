#include<iostream>
using namespace std;
void add(int,int);
void add(int,int,int);
int main()
{
    int x,y,z;
    x=10;
    y=9;
    z=8;
    add(x,y);
    add(x,y,z);
    return 0;
}
void add(int x,int y)
{
    cout<<"sum="<<x+y<<endl;
    return;
}
void add(int x,int y,int z)
{   
    cout<<"sum="<<x+y+z<<endl;
    return;
}