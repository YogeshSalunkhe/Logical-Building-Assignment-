//Compiler version gcc  6.3.0
#include <stdio.h>

void StrToogel(char *Str)
{
  
  while(*Str != '\0' || *Str == ' ')
  {
     if(*Str >= 'a' && *Str <= 'z')
     {
         *Str -= 32;
     }
     else if(*Str >= 'A' && *Str <= 'Z')
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
 
   StrToogel(Arr);
  
  
  return 0;
}