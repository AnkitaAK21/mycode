#include<stdio.h>
struct BOOK
{
    char title[50];
    int edition ;
    float price;
}b[50];
typedef struct BOOK sb;
void read(sb b[],int n)
{
    int i;
    for (i=0 ;i<n;i++)
    {
        printf("enter the details of book %d\n",i+1);
        scanf("%s",b[i].title);
        printf("edition:\n");
        scanf("%d",&b[i].edition);
        scanf("%f",&b[i].price);
    }
}
void display(sb b[],int  n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("book %d\n",i+1);
        printf("title: %s\n",b[i].title);
        printf("edition :%d\n",b[i].edition);
        printf("price:%f\n",b[i].price);
    }
}
int compute(sb b[],int n)
{
    int i,a;
    float  max;max=b[0].price;
    for(i=1;i<n;i++)
    {
        if(b[i].price>max)
        {
            max=b[i].price;
            a=i; 
        }
    }
    return a;
}
int main()
{
    int  n,a;
    printf("enter the number of books\n");
    scanf("%d",&n);
    read(b,n);
    display(b,n);
    a=compute(b,n);
    printf("details of book with highest price\n");
    printf("title:%s\n",b[a].title);
    printf("edition :%d\n",b[a].edition);
    printf("price:%f\n",b[a].price);
}