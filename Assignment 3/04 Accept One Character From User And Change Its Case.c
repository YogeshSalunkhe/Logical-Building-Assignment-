//Compiler version gcc  6.3.0

#include <stdio.h>

void Display_Convert(char Cvalue)
{
   if(Cvalue >= 'A' && Cvalue <= 'Z')
   {
     printf(" %c ",Cvalue + 32);
   }
   else if(Cvalue >= 'a' && Cvalue <='z')
   {
     printf(" %c ",Cvalue - 32);
   }  
}
int main()
{
  char Cvalue = '\0';
  
  printf("\n\t Enter A Character => ");
  scanf("%c",&Cvalue);
  
  Display_Convert(Cvalue);
  
  return 0;
}
