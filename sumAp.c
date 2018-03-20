#include<stdio.h>
void main()
{
int a,b,c,t,i,sum=0;
printf("enter the first number and \ndifference and \nnumber of terms");
scanf("%d%d%d",&a,&b,&c);
for(i=1;i<c;i++)
{
t=a+(c-1)*b;
sum=sum+t;
}
printf("%d",sum);
}
