#include<stdio.h>
void main()
{
    int n,rev,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        rev=temp%10;
        sum=sum*10+rev;
        temp/=10;
    }
    if(sum==n)
    {
        printf(" the number is palindrome");
    }
    else
    
        printf("the numberis not palindrome");
    
}
