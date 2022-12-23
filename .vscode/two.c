#include<stdio.h>
void update(int *m,int *n)
{
    *m=*m+30;
    *n=*n+50;
}
int main()
{
    int  m,n;
    printf("enter m and n\n");
    scanf("%d %d",&m,&n);
    update(&m,&n);
    printf("m=%d and n=%d\n",m,n);
    return 0;
}