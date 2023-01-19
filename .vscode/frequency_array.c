#include<stdio.h>
int main()
{
    unsigned int arr[10],n,i,j,count=0,x;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                if(arr[i]==arr[j])
                count++;
            }
            if(count>1)
                printf("%d has a frequency of %d times\n",arr[i],count);
            count=0;   
        }
        
       return 0;
        
} 