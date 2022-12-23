#include<stdio.h>
struct student
{
    char name[100];
    int sem;
    float cgpa;
}s[10];
void read(struct student s[10],int  n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("enter the name of the  %d studetn\n",i+1);
        scanf("%s",s[i].name);
        printf("enter the sem of the %d student\n",i+1);
        scanf("%d",&s[i].sem);
        printf("enter the cgpa of %d student\n",i+1);
        scanf("%f",&s[i].cgpa);
    }
}
void max(struct student s[10],int n)
{
    int i,a;
    float  high;
    high=s[0].cgpa;
    for(i=0;i<n;i++)
    {
        if(s[i].cgpa>high){
        high=s[i].cgpa;
        a=i;}
    }    
    printf("student who scored highest cgpa is: %s\n",s[a].name);
}
int main()
{
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    printf("enter the details of students\n");
    read(&s,n);
    printf("topper details:\n");
    max(s,n);
return 0;
}
