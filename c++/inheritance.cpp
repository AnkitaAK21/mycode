#include<iostream>
using namespace std;
class student
{
    char name[20];
    int reg,age;
    public:
            student();
            ~student();
            void getsdata();
            int giveage();

};
student::student()
{}
student::~student()
{}
int student::giveage()
{
    return age;
}
void student::getsdata()
{
    cout<<endl<<"name:";
    cin>>name;
    cout<<"reg no.";
    cin>>reg;
    cout<<"age";
    cin>>age;
    return;
}
class  ugstudent:public student{
    private:
    int sem,fee,sti;
    public:
            ugstudent();
            ~ugstudent();
            void getugdata();
            int givesem();
};
ugstudent::ugstudent()
{}
ugstudent::~ugstudent()
{}
void ugstudent::getugdata()
{   getsdata();
    cout<<"sem:";
    cin>>sem;
    cout<<"fee:";
    cin>>fee;
    cout<<"stipend:";
    cin>>sti;
}
int ugstudent::givesem()
{
    return sem;
}
class pgstudent:public student{
    private:
            int sem,fee,sti;
    public:
            pgstudent();
            ~pgstudent();
            void getpgdata();
            int givesem();
};
pgstudent::pgstudent()
{}
pgstudent::~pgstudent()
{}
void pgstudent::getpgdata()
{
    getsdata();
    cout<<"sem";
    cin>>sem;
    cout<<"fee";
    cin>>fee;
    cout<<"stipend";
    cin>>sti;
}
int pgstudent::givesem()
{
    return sem;
}
int main()
{
    ugstudent u[10];
    pgstudent p[10];
    int i,n,s;
    cout<<endl<<"enter the number of students:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<endl<<"enter the details of UG studen"<<i<<endl;
        u[i].getugdata();

    }
    for(s=1;s<=8;s++)
    {
        float sum=0;
        int flag=0,cou=0;
        for(i=1;i<=n;i++)
        {
            if(u[i].givesem()==s)
            {
                sum=sum+u[i].giveage();
                flag=1;
                cou++;
            }
            if(flag==1)
            cout<<endl<<s<<"sem"<<"avg age is"<<sum/cou<<endl;;
        }
    }
        for(i=1;i<=n;i++)
        {
            cout<<endl<<"enter the details of pg student"<<i<<endl;
            p[i].getpgdata();
        } 
        for(s=1;s<=8;s++)
        {
            float sum=0;
            int flag=0,cou=0;
            for(i=1;i<=n;i++)
            {
                if(p[i].givesem()==s)
                {
                    sum+=p[i].giveage();
                    flag=1;
                    cou++;
                }
            }
            if(flag==1)
            {
                cout<<endl<<s<<"sem";
                cout<<"avg age is"<<sum/cou<<endl;
            }
        }
}