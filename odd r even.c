#include<stdio.h>
#include<string.h>
int main()
{
int a,b;
char c[10],d[10];
scanf("%s",&c);
b=strlen(c);
for(a=0;a<b;a++)
{
    if(a%2==0)
    {a[c]=d[a+1]=c[a];}
    else
    {c[a]=d[a-1]=c[a];}
}
for(a=0;a<b;++)
{printf("%c",d[a]);}
return 0;
}
