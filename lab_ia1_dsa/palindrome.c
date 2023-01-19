#include<stdio.h>
int palindrome(int* num)
{
    int rem,rev=0;
    while(*num!=0)
    {
        rem=*num%10;
        rev=rev * 10 +rem;
        *num=*num/10;
    }
    return rev;
}
int main()
{
    int num,n;
    printf("enter the number to be checked\n");
    scanf("%d",&num);n=num;
    if(palindrome(&num)==n)
    printf("it is a palindrome\n");
    else
    printf("it is not a palindrome\n");
    return 0;
}