#include<stdio.h>
#include<string.h>
void main()

{
char str[90];
int i,c;
printf("enter a string ");
scanf("%s ",&str);

c=strlen(str);

for(i=c-1;i>=0;i--)
  printf("%c",str[i]);
}
