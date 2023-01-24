#include<iostream>
using namespace std;
class STACK
{
    int *ar;
    int top;
    public:
            STACK()
            {
                top=-1;
                ar=new int[10];
                
            }
            void push(int ele){
                if(top==9){
                cout<<"overflow\n";
                return;}
                else{
                    //cout<<"push the number\n";
                ar[++top]=ele;
                }
            }
            int pop()
            {
                int ele;
                if(top==-1)
                cout<<"underflow\n";
                else{
                    //cout<<"pop the number\n";
                ele=ar[top--];
                return ele;}
            }
            ~STACK()
            {
                cout<<"destroyed\n";
                delete [] ar;
                ar=NULL;
            }
};
int main()
{
    STACK s;
    int ele,a;
    for(;;){
        cout<<"enter the choice\n";
        cin>>a;
        switch(a){
    case 1:cout<<"enter the element\n";
            cin>>ele;
            s.push(ele);
            break;
    case 2:
         ele=s.pop();
         cout<<ele<<endl;
        break;
    default:cout<<"invalid\n";
    }}
    return 0;
}