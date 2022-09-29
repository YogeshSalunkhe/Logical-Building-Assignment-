//Compiler version gcc  6.3.0
#include <stdio.h>

void Strlwrx(char *Str)
{
  
  while(*Str != '\0' || *Str == ' ')
  {
     if(*Str >= 'A' && *Str <= 'Z')
     {
         *Str += 32;
     }
     printf("%c",*Str);
     *Str++;
  }
  
 
}

int main()
{  
  char Arr[20] ;
  
  
  printf("\n\t Enter A Character => ");
  scanf("%[^\n]",&Arr);
 
   Strlwrx(Arr);
  
  
  return 0;
}