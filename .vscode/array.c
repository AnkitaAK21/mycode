#include<stdio.h>
int main()
{
    int ar[10],i,j,sum=0,num,rev=0,n,b;
    printf("enter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for ( i = 0; i < n; i++)
    {
        num=ar[i];
        while (num!=0)
        {
            b=num%10;
            rev=(rev*10)+b;
            num/=10;
        }
            sum=rev+ar[i];
            for ( j = 0; j < n; j++)
            {
                if(sum==ar[j])
                printf("special number %d\n",ar[i]);
            }
        rev=0;    
    }
   return 0; 
}