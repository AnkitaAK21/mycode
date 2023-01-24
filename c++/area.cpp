#include<iostream>
using namespace std;
float area(float);
float area(float,int);
float area(float,float);
int main()
{
    int b=34;
    float r=34.4,l=436.46,h=6.7,base=534.567,a,f,g;
    a=area(r);
    cout<<a<<endl;
    f=area(l,b);
    cout<<f<<endl;
    g=area(h,base);
    cout<<g<<endl;
    return 0;
    
}
float area(float r)
{
    return (3.14*r*r);
}
float area(float l,int b)
{
    return (l*b);
}
float area(float h,float base)
{
    return (0.5*base*h);
}
