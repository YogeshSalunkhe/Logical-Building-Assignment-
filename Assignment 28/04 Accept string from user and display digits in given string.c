//Compiler version gcc  6.3.0
#include <stdio.h>

void DisplayDigit(char *Str)
{
  
  while(*Str != '\0' || *Str == ' ')
  {
     if(*Str >= '0' && *Str <= '9')
     {
          printf("%c",*Str);
     }
    
     *Str++;
  }
  
 
}

int main()
{  
  char Arr[20] ;
  
  
  printf("\n\t Enter A Character => ");
  scanf("%[^\n]",&Arr);
 
   DisplayDigit(Arr);
  
  
  return 0;
}
