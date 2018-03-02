#include<stdio.h>
int main()
{
int up,low,i,k=0;
printf("enter the limit1");
scanf("%d",&low);
printf("enter the limit2");
scanf("%d",&up);
for(i=low;i<=up;i++)
{
  if(i%2!=0)
    printf("\n %d",i);
}
}
