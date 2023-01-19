#include<stdio.h>
int large(int* num1,int* num2)
{
    if(*num1> *num2)
    return (*num1);
    else
    return(*num2);
}
int main(){
    int n1,n2;
    printf("enter the numbers to be checked\n");
    scanf("%d%d",&n1,&n2);
    printf("largest number is :%d\n",large(&n1,&n2));
}