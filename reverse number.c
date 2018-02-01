#include <stdio.h>
void main()
{
	int k,fact=1,i;
	printf("enter the number");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		fact=fact*i;
	}
printf("factorial is %d",fact);
}
