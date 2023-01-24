#include<iostream>
using namespace std;
class distance1
{
    private:
            float ft,inch;
    public:
            void initialise();
            void add(distance1 ,distance1 );
            void sub(distance1 ,distance1 );
            void display();
};
void distance1::initialise()
{
    cout<<"enter the length in ft"<<endl;
    cin>>ft;
    cout<<"inches"<<endl;
    cin>>inch;
}
void distance1::add(distance1 d1,distance1 d2)
{
    ft=d1.ft+d2.ft;
    inch=d1.inch+d2.inch;
    return;
}
void distance1::sub(distance1 d1,distance1 d2)
{
    ft=d1.ft-d2.ft;
    inch=d1.inch-d2.inch;
}
void distance1::display()
{
    cout<<ft<<"."<<inch<<endl;
}
int main()
{
    distance1 d1,d2,d3,d4;
    cout<<"enter the first distance\n";
    d1.initialise();
    cout<<"2nd no\n";
    d2.initialise();
    d3.add(d1,d2);
    d3.display();
    d4.sub(d1,d2);
    d4.display();
    return 0;
    

}
