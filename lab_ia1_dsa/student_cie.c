#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int ia[3];
    int cta;
}s;
typedef struct student st; 
void read(st* s)
{
    printf("enter the roll no. of the student\n");
    scanf("%d",&s->roll);
    printf("enter the name of the student\n");
    scanf("%s",s->name);
    printf("enter the ia and cta marks\n");
    scanf("%d%d%d%d",&s->ia[0],&s->ia[1],&s->ia[2],&s->cta);
}
void display(st s)
{
    printf("roll no.:%d\nname:%d\nia marks:\nia1=%d\nia2=%d\nia3=%d\ncta:%d\n",s.roll,s.name,s.ia[0],s.ia[1],s.ia[2],s.cta);
}
int  compute(st* s)
{
    int cie;
    if(s->ia[0]<=s->ia[1] && s->ia[0]<=s->ia[2])
    cie=s->ia[1]+s->ia[2]+s->cta;
    else if(s->ia[1]<=s->ia[2] && s->ia[1]<=s->ia[0])
    cie=s->ia[2]+s->ia[0]+s->cta;
    else
    cie=s->ia[0]+s->ia[1]+s->cta;
    return cie;
}
int 
main()
{
    printf("enter the details of the student\n");
    read(&s);
    printf("the details of the student are:\n");
    display(s);
    printf("cie=%d\n",compute(&s));
}