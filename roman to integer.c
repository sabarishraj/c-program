#include <stdio.h>
#include <string.h>
void main()
{
   char rom[30];
   int b[30], l, i, k, dec;
   printf("Enter the roman number\n");
   scanf("%s", &rom);
   l =strlen(rom);
   for(i = 0; i < l; i++)
   {
      switch (rom[i])
      {
     case 'I':  b[i] = 1;
            break;
     case 'V':  b[i] = 5;
            break;
     case 'X':  b[i] = 10;
            break;
     case 'L':  b[i] = 50;
            break;
     case 'C':  b[i] = 100;
            break;
     case 'D':  dec = dec + 500;
            break;
     case 'M':  b[i] = 1000;
            break;
     default :  printf("Invalid choice");
            break;
      }
   }
   k = b[l - 1];
   for(i = l - 1; i > 0; i--)
   {
      if(b[i] > b[i - 1])
      {
     k = k - b[i - 1];
      }
      if(b[i] <= b[i - 1])
      {
     k = k + b[i - 1];
      }
   }
   printf("decimal equivalent is %d", k);
}
