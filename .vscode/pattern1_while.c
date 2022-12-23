#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        j=0;
        while (j<=i)
        {
            printf("*\t");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}