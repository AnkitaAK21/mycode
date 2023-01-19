#include<stdio.h>
#define max 10
struct STACK
{
    int arr[max];
    int top;
}s1;
void push(struct STACK *s1,int n)
{
    if(s1 ->top>max-1){
    printf("stack overflow\n");
    return;}
    s1->top++;
    s1->arr[s1->top]=n;
    printf("%d succesfully pushed into the stack\n",n);
 }
void pop(struct STACK *s1)
{
    int a;
    if(s1->top<0)
    {
        printf("stack underflow\n");
    }
   a= s1->arr[s1->top];
    s1->top--;
    printf("%d popped out \n",a);
}
void  display(struct STACK *s1){
    int i;
    for(i=s1->top;i>=0;i--)
    {
        printf("%d\n",s1->arr[i]);
    }
}
int main()
{
    int n;
    s1.top=-1;
    n=max;
    printf("enter the element\n");
    scanf("%d\n",&n);
    push(&s1,n);
    pop(&s1);
    display(&s1);
}
