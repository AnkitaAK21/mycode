#include<iostream>
using namespace std;
class A
{
    private :int x;
    public :void set(int a)
            {
                x=a;
            }
            int get()
            {
                return x;
            }
            friend void abc(A& x);
};
void abc(A &ob)
{
    ob.x=10;
    cout<<"from friend x="<<ob.x<<endl;
    return;
}
int main()
{
    A ob1;
    ob1.set(20);
    cout<<"from main x="<<ob1.get()<<endl;
    abc(ob1);
    cout<<"from main through friend x="<<ob1.get()<<endl;
    return 0;
}
