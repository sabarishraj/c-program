#include<stdio.h>
int main()
{
int n,c,d,j,count;
printf("enter the two limits");
scanf("%d%d",&c,&d);
for(j=c;j<d;j++)
{
count=0;
for(n=2;n<j;n++)
{
if(j%n==0)
count++;
}
if(count==0)
printf("%d\n",j);
}
}
