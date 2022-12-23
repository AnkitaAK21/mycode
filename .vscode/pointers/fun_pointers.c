#include<stdio.h>
void  update(int *n)
{
    *n=*n+20;
}
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    update(&n);
    printf("the new value of n is: %d\n",n);
    return 0;
}