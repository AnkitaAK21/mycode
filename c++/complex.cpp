#include<iostream>
using namespace std;
class COMPLEX1
{
    private: 
            int real,img;
        
    public:
            void initialise()
            {
                cout<<"enter real part\n";
                cin>>real;
                cout<<"enter the imaginary part\n";
                cin>>img;
            }
            void add(COMPLEX1 c1,COMPLEX1 c2);
            void sub(COMPLEX1 c1 ,COMPLEX1 c2);
            void display();
};
void COMPLEX1::add(COMPLEX1 c1,COMPLEX1 c2)
{
    real=c1.real+c2.real;
    img=c1.img+c2.img;
    return;
}
void COMPLEX1::sub(COMPLEX1  c1,COMPLEX1 c2)
{
    real=c1.real-c2.real;
    img=c1.img-c2.img;
    return;
}
void COMPLEX1::display()
{
    if(img>=0)
    cout<<real<<"+i"<<img<<endl;
    else
    cout<<real<<"-i"<<img<<endl;
}
int main()
{
    COMPLEX1 c1,c2,c3,c4;
    cout<<"enter the first complex no\n"<<endl;
    c1.initialise();
    cout<<"2nd"<<endl;
    c2.initialise();
    c3.add(c1,c2);
    c3.display();
    c4.sub(c1,c2);
    c4.display();
    return 0;
}