#include<stdio.h>
void read(int (*a)[10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
}
void display(int (*a)[10],int n)
{
     int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }        printf("\n");
    }
}
int principal(int a[10][10],int  n)
{
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum+= a[i][j];
        }
    }
    return sum;
}
int main()
{
    int a[10][10],n;
    printf("enter the n\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    read(a,n);
    printf("the elements are:\n");
    display(a,n);
    printf("the sum of principal diagonal elements is :%d\n",principal(a,n));
}