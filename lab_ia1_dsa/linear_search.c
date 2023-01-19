#include<stdio.h>
void read(int* a,int n)
{
    //printf("enter the number of elements of array\n");
    //canf("%d",&n);
    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
}
int search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        return 1;
    }
    return 0;
}
int main()
{

    int  a[10],n,key,x;
    printf("enter the n\n");
    scanf("%d",&n);
    printf("details\n");
    read(&a[0],n);
    printf("enter the key\n");
    scanf("%d",&key);
    printf("\n\n");
    x=search(a,n,key);
    if(x==1)
    printf("successful search\n");
    else 
    printf("unsuccessful search\n");
}