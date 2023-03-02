//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

void StrCatX(char *Str1,char *Str2)
{
     int i = 0;
     
     for(;*Str1 != '\0';*Str1++);
     
     *Str1--;
     
     for(i = 1;*Str2 != '\0';*Str2++,i++)
     {
         if(i % 2 == 0)
         {
              *Str1 = *Str2;
              *Str1++;
         }
     }
     
     printf("\n\t %s",Str1);
}
int main()
{
  char src[20],dest[20];
  
  printf("\n\t Enter First String => ");
  gets(src);
  
  printf("\n\t Enter Second String => ");
  gets(dest);
  
  StrCatX(src,dest);
  
  
  getch();
  return 0;
}