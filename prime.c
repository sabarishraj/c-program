#include <stdio.h>
void main()
{
    int a, i, num = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    for(i=2; i<=a/2; ++i)
    {
       if(a%i==0)
        {
            num=1;
            break;
        }
    }
    if (num==0)
    {
     printf("yes, it is a prime number");
    }
    else
        printf("it is not a prime number");

}
