#include<iostream>
using namespace std;
class COMPLEX1
{
    private: 
            int real,img;
        
    public:
            COMPLEX1()
            {
                real=0;
                img=0;
            }
            COMPLEX1(int r,int i)
            {
                real=r;
                img=i;
            }
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
            COMPLEX1 operator +(COMPLEX1 );
            COMPLEX1 operator ++();
            COMPLEX1 operator ++(int);

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
COMPLEX1 COMPLEX1::operator +(COMPLEX1 c2)
{
    COMPLEX1 temp;
    temp.real=real+c2.real;
    temp.img=img+c2.img;
    return temp;
}
COMPLEX1 COMPLEX1::operator ++()
{
    ++real;
    ++img;
    return (*this);
}
COMPLEX1 COMPLEX1::operator ++(int)
{
    COMPLEX1 old;
    old=*this;
    ++real;
    ++img;
    return (old);
}
int main()
{
    COMPLEX1 c1,c2,c3,c4,c5;
    cout<<"enter the first complex no\n"<<endl;
    c1.initialise();
    cout<<"2nd"<<endl;
    c2.initialise();
    c3=c1+c2;
    c3.display();
    c4=++c3;
    c4.display();
    c5=c4++;
    c4.display();
    c5.display();
        return 0;
}