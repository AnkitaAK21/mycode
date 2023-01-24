#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:int roll_no;
            char *name;
    public:static int i;
            student()
            {
                cout<<"enter the roll number\n";
                cin>>roll_no;
                name=new char[30];
                cout<<"enter the name\n";
                cin>>name;
                i++;
            }
            student(int rn,char *n)
            {
                roll_no=rn;
                name=new char[30];
                strcpy(name,n);
                i++;
            }
            void display()
            {

                cout<<roll_no<<endl;
                cout<<name<<endl;
            }
            ~student()
            {
                cout<<"object"<<i--<<"destroyed\n";
                delete [] name;

                name=NULL;
            }
};
int student::i=0;
int main()
{    
    char name1[]="ank";char name2[]="tk";
    student s1,s2(2,name1),s3(3,name2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}