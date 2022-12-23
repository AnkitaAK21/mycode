#include<stdio.h>
struct student
{
  int roll;
  char name[100];
  float cgpa;  
}s[100];
void read(struct student  s[100],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("enter the details of %d student\n",i+1);
        scanf("%d%s%f",s[i].roll,s[i].name,s[i].cgpa);
    }
}
void display(struct student s[100],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        /* code */printf("roll no.=%d\n name=%s\n cgpa=%f\n",s[i].roll,s[i].name,s[i].cgpa);
    }
}
int main()
{
    int  i,n;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
         printf("enter the details of the students\n");
         read(s,n);
         printf("the details of the studeent are:\n");
         display(s,n);
    return 0;
}

