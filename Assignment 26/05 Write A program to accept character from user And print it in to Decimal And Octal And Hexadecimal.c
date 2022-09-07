//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(char Ch)
{
    printf("\n\t Decimal     = %d",Ch);
    printf("\n\t Octal       = 0%o",Ch);
    printf("\n\t Hexadecimal = OX%x",Ch);
}

int main()
{
  char Cvalue = '\0';
  
  printf("\n\t Enter A character => ");
  scanf("%c",&Cvalue);
  
  Display(Cvalue);
  
  return 0;
}
