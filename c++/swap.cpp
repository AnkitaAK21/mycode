#include<iostream>
using namespace std;
template<class T>
void swap1(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;

}
int main()
{
    int x=10,y=90;
    float a=90.99,b=56.67;
    cout<<"before swapping"<<endl;
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    swap1(x,y);
    cout<<"after swapping"<<endl;
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    cout<<"before swapping"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;

    swap1(a,b);
    cout<<"a="<<a<<"b="<<b<<endl;
}