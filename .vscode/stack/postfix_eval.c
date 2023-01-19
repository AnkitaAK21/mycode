#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define SIZE 10
struct  STACK
{
    float ar[SIZE];
    int top;
}s;
typedef  struct STACK ss;
void push(ss* s,float c)
{
    s->ar[++s->top]=c;
}
float  pop(ss* s)
{
    float c;
    c=s->ar[s->top--];
    return c;
}
float compute(char  ch,float op1,float op2)
{
    switch(ch)
    {   case '+':return (op1+op2);
        case '-':return (op1-op2);
        case '*':return (op1*op2);
        case '/':return (op1/op2);
        default :printf("invalid expression\n");
                exit(0);
    }
}
float evaluate(ss s,char str[SIZE])
{
    float opnd1,opnd2,result;
    int i;  
    for(i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        push(&s,(float)(str[i]-'0'));
        else
        {
            opnd2=pop(&s);
            opnd1=pop(&s);
            result=compute(str[i],opnd1,opnd2);
            push(&s,result);
        }        
    }
        result=pop(&s);
        return result;
}
int main()
{
    char str[SIZE];
    printf("enter the postfix expression\n");
    scanf("%s",str);
    printf("result  is:\n");
    printf("%f\n",evaluate(s,str));
}






















