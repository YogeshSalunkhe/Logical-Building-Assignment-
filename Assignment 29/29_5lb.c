//Compiler version gcc  6.3.0
#include <stdio.h>

void Reversestr(char *Str)
{
  int i = 0;
  
  while(*Str != '\0')
  {
     *Str++;
  }
  *Str--;
  while(Str[i] != '\0')
  {
    Str[i] = *Str;
    printf("%c",Str[i]);
    i++;
    *Str--;
  }
 
}

int main()
{  
  char Arr[20] ;
  
  
  printf("\n\t Enter A Character => ");
  scanf("%[^\n]",&Arr);
 
   Reversestr(Arr);
  
  
  return 0;
}