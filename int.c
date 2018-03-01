#include<stdio.h>
void main()
{
int a,d=0;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
    a= a/10;
    d=d+1;
}
printf("%d",d);
}

