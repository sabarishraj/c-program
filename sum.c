#include<stdio.h>
void main()
{
int k,sum=0,j;
printf("\n Enter a number");
scanf("%d",&k);

for(j=1;j<=k;++j)
{
sum=sum+j;
}

printf("Sum is %d",sum);
}
