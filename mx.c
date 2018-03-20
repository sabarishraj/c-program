
#include<stdio.h>
void main()
{
int p,temp,i,l,a[20];
printf("enter the array of numbers");
scanf("%d",&p);
printf("enter the numbers");
for(i=0;i<=p;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=p;i++)
{
for(l=i+1;l<=p;l++)
{
if(a[i]<a[l])
{
temp=a[i];
a[i]=a[l];
a[l]=temp;
}
}
}
printf("%d",a[0]);
}
