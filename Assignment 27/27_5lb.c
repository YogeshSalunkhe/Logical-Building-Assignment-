//Compiler version gcc  6.3.0
#include <stdio.h>

void Reverse(char *Str)
{
  int i = 0;
  
  while(Str[i] != '\0')
  {
     i++;
  }
  i--;
  while(i >= 0)
  {
    printf("%c",Str[i]);
    i--;
    
  }
 
}

int main()
{  
  char Arr[20] ;
  
  
  printf("\n\t Enter A Character => ");
  scanf("%[^\n]",&Arr);
 
   Reverse(Arr);
  
  
  return 0;
}