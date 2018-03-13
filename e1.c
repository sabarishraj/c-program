#include <stdio.h>
#include<math.h>
int main(void) 
{
int k,l;
scanf("%d %d",&k,&l);
for(int i=k+1;i<l;i++)
{
	if((i%2)==0)
	{
		printf("%d\n",i);
	}
}
	return 0;
}
