#include<stdio.h>
int main()
{
    int fact=1;
    int k;
    int n;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        fact=fact*k;
    }
    
    printf("%d",fact);
}
