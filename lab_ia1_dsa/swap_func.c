#include<stdio.h>
int swap(int* num1,int* num2)
{
    int temp;
    temp= *num1;
    *num1= *num2;
    *num2=temp;
}
int main()
{
    int num1,num2;
    printf("enter the two numbers\n");
    scanf("%d%d",&num1,&num2);
    swap(&num1,&num2);
    printf("num1=%d  num2=%d\n",num1,num2);
    return 0;
}