//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(char Ch)
{
  
   if(Ch >= 'A' && Ch <= 'Z')
   {
       printf(" %c => %c.",Ch,Ch + 32);
   }
   else
   {
       printf(" %c => %c",Ch,Ch);
   }
}

int main()
{
  char Cvalue ='\0';
  
  printf("\n\t Enter A Character => ");
  scanf("%c",&Cvalue);
 
  Display(Cvalue);
  
  return 0;
}