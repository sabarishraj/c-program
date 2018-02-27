#include<stdio.h>
int main()
{
int i,j,k;

scanf("%d%d%d",&i,&j,&k);

if((i>j)&&(j<k))
{
printf("i is greater");
else if((j>k)&&(i>k))
printf("j is greater");
}
else
{
printf("k is greater");
}
