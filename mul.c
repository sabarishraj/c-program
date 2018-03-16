#include <stdio.h>
int main(void) {
	int n,i,r;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=n*i;
		printf("\n%d*%d=%d",n,i,r);
	}
	return 0;
}
