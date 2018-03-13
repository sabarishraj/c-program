#include <stdio.h>
#include<math.h>
int main(void) 
{
int n,rem,sum=0,k;

scanf("%d",&n);
k=n;
while(n!=0)
{
	rem=n%10;
	sum=sum+rem*rem*rem;
	n=n/10;
}
if(k==sum)
{
	printf("Armstrong number");
}
else
printf("not an armstrong");
	return 0;
}
