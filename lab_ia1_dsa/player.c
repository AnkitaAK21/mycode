#include<stdio.h>
struct PLAYER 
{
    int  name[20];
    int score[3];
}p[50];
typedef struct PLAYER sp;
void  read(sp p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the name of %d player\n",i+1);
        scanf("%s",p[i].name);
        printf("enter the scores\n");
        printf("score1:\t");
        scanf("%d",&p[i].score[0]);
        printf("score2:\t");
        scanf("%d",&p[i].score[1]);
        printf("score3:\t");
        scanf("%d",&p[i].score[2]);
    }
}
void display(sp p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" the name of %d player  is:\n",i+1);
        printf("%s\n",p[i].name);
        printf(" the scores are:\n");
        printf("score1:\t");
        printf("%d\n",p[i].score[0]);
        printf("score2:\t");
        printf("%d\n",p[i].score[1]);
        printf("score3:\t");
        printf("%d\n",p[i].score[2]);
    }
}
void compute(sp p[],int n)
{
    int i,j;
    int sum=0;float avg;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            sum+=p[i].score[j];
        }
        avg=sum/3;
        sum=0;
        printf("average of %d player is:%f\n",i+1,avg);
    }
}
int main()
{
    int n;
    printf("enter the number of players\n");
    scanf("%d",&n);
    read(p,n);
    printf("\n\n");
    display(p,n);
    printf("\n\n");
    compute(p,n);
}