#include <stdio.h>
int main(void) 
{
	int i,j,k[3],n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&k[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(k[i]>k[j])
		{
		t=k[i];
		k[i]=k[j];
		k[j]=t;
		}
		}
	}
		for(i=0;i<n;i++)
		printf("%d\n",k[i]);

		return 0;
}
