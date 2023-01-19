#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct STACK
{
    int a[SIZE];
    int top;
}s;
void push(struct STACK* s,int ele)
{
    if(s->top==SIZE-1)
    printf("stack overflow\n");
    else
    s->a[++s->top]=ele;
}
int pop(struct STACK* s)
{
    int ele;
    if(s->top==-1)
    {
        printf("stack underflow\n");
        return -1;
    }
    else
    {
        ele= (*s).a[((*s).top)--];
        return ele;
    }
}
void display(struct STACK s)
{
    int i;
    for(i=s.top;i>=0;i--)
    printf("%d\n",s.a[i]);
}
int main()
{
    int ele,choice;
    //struct STACK s;
    s.top=-1;
    printf("the choices are:\n");
    printf("1:push\n");
    printf("2:pop\n");
    printf("3:display\n");
    printf("4:exit\n");
    while(1)
    {
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the element to be pushed\n");
                   scanf("%d",&ele);
                   push(&s,ele);
                   break;
            case 2:ele=pop(&s);
                   if(ele!=-1) 
                   printf("popped element is:%d\n",ele);
                   break;
            case 3:display(s);
                   break;        
            case 4:printf("exit\n");
                   return 0;
            default : printf("exit\n");
                    exit(0);       
        }
    }
    return 0;
}