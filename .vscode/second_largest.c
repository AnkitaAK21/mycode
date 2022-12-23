#include<stdio.h>
int main()
{
    int arr[10],n,sec_lar,lar,i;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    printf("array elements are:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sec_lar=arr[0];
    lar=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>lar)
        {
            sec_lar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>sec_lar)
        {
            sec_lar=arr[i];
        }
        else
        lar=arr[0];
    }
    printf("second largest number is: %d\n",sec_lar);
    return 0;    
}