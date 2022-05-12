//Compiler version gcc  6.3.0
#include <stdio.h>

int main()
{
  char Name[30];
  
  printf("\n\t Enter Name => ");
  scanf("%[^\n]",&Name);
  
  printf("\n\t Your Name Is => %s",Name);
  
  return 0;
}