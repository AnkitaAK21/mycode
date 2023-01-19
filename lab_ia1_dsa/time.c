#include<stdio.h>
struct TIME
{
    int hh,mm,ss;
}t1,t2,t3,t4;
void read(struct TIME* t1)
{
    scanf("%d%d%d",&t1->hh,&t1->mm,&t1->ss);
}
void display(struct TIME t)
{
    printf("%d:%d:%d\n",t.hh,t.mm,t.ss);
}
struct TIME add(struct TIME t1,struct TIME t2)
{
    int carry=0;
    struct TIME t3;
    t3.ss=t1.ss+t2.ss;
    if(t3.ss>=60)
    {
        t3.ss=t3.ss-60;
        carry=1;
    }
    t3.mm=t1.mm+t2.mm+carry;
    carry=0;
    if(t3.mm>=60)
    {
        t3.mm-=60;
        carry=1;
    }
    t3.hh=t1.hh+t2.hh+carry;
    return t3;
}    
struct TIME diff(struct TIME t1,struct TIME t2)
{
    struct TIME t4;
    int borrow=0;
    if(t1.hh>t2.hh)
    {
        if(t1.ss<t2.ss)
        {
            t4.ss=(t1.ss+60)-t2.ss;
            borrow=1;
        }
        else
        t4.ss=t1.ss-t2.ss;
        t2.mm=t2.mm+borrow;
        borrow=0;
        if(t1.mm<t2.mm)
        {
            t4.mm=(t1.mm+60)-t2.mm;
            borrow=1;
        }
        else
        t4.mm=t1.mm-t2.mm;
        t2.hh=t2.hh+borrow;
        borrow=0;
        t4.hh=t1.hh-t2.hh;
    }
    return t4;
}
int main()
{
    printf("enter the times\n");
    read(&t1);
    read(&t2);
    printf("the two timings are:\n");
    display(t1);
    display(t2);
    t3=add(t1,t2);
    printf("sum is:\n");
    printf("%d:%d:%d\n",t3.hh,t3.mm,t3.ss);
    t4=diff(t1,t2);
    printf("difference is:\n");
    printf("%d:%d:%d\n",t4.hh,t4.mm,t4.ss);
    return 0;
}

