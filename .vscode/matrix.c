#include<stdio.h>
int main()
{
    int  ar1[3][3],ar2[3][3],ar3[3][3];
    int i,j;
    
    for(i=0;i<3;i++)
    {
        
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar1[i][j]);
        }
    }for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar2[i][j]);
        }
    }
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           ar3[i][j]=ar1[i][j]+ar2[i][j];
            printf("%d\t",ar3[i][j]);
        }
        printf("\n");
    }

}