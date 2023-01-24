#include<iostream>
using namespace std;
template<class T>
class COMPLEX1
{
    private: 
            int real,img;
        
    public:
            COMPLEX1()
            {
                real=img=0;
            }
            COMPLEX1(int x,int y)
            {
                real=x;img=y;
            }
            void display()
            {
                cout<<real<<"+i"<<img<<endl;
            }
            void swap(COMPLEX1,COMPLEX1);

 void swap1(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;

}
};
template<class T>
int main()
{
    COMPLEX1 c1(10,20),c2(20,40);
    c1.display();
    c2.display();
    swap1(c1,c2);
    c1.display();
    c2.display();
}
