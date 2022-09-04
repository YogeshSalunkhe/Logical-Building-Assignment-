//Compiler version gcc  6.3.0
#include <stdio.h>

void Display(char Ch)
{
  
   if(Ch >= 'A' && Ch <= 'Z')
   {
       while(Ch <= 90)
       {
          printf("\n %c ",Ch);
          
          Ch++;
       }
   }
   else if(Ch >= 'a' && Ch <= 'z')
   {
       while(Ch <= 122)
       {
         printf("\n %c ",Ch);
         Ch++;
       }
       
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
