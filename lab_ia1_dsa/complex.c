#include<stdio.h>
struct COMPLEX
{
    float rp,ip;
}c1,c2,s,d;
void read(struct COMPLEX* c)
{
    scanf("%f",&c->rp);
    scanf("%f",&c->ip);
}
void display(struct COMPLEX c)
{
    printf("%f + i%f\n",c.rp,c.ip);
}
struct COMPLEX sum(struct COMPLEX c1,struct COMPLEX c2)
{
    struct COMPLEX c3;
     c3.rp=c1.rp+c2.rp;
     c3.ip=c1.ip+c2.ip;
    return c3;
}
struct COMPLEX diff(struct COMPLEX c1,struct COMPLEX c2)
{
    struct COMPLEX c4;
    c4.rp=c1.rp-c2.rp;
    c4.ip=c1.ip-c2.ip;
    return c4;
}
int main()
{

    printf("enter the first complex number\n");
    read(&c1);
    printf("enter the second complex number\n");
    read(&c2);
    printf("\n\n");
    display(c1);
    display(c2);
    printf("\n\n");
    struct COMPLEX s=sum(c1,c2);
    display(s);
    struct COMPLEX d=diff(c1,c2);
    display(d);
}
