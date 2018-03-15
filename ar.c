#include <stdio.h>
#include<math.h>
void main() 
 {                                           
int n,n2,p;                  
scanf("%d",&n);
scanf("%d",&n2);
for(p=n+1;p<=n2;p++)
{
int     s=0,r,k;
    k=p;
   while(k!=0)
    {
     r=k%10;
     s=s+r*r*r;
     k=k/10;
    }

if(p==s)
{
    printf("\n %d armstrong number",i);
}
else
{
printf("\n %d not an armstrong number",i);
}
}

}
