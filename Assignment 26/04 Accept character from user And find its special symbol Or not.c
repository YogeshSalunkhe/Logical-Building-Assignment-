//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSpecial(char Ch)
{
  
   if((Ch >= 'A' && Ch <= 'Z') ||(Ch >= 'a' && Ch <= 'z') || (Ch >= '0' && Ch <= '9'))
   {
       return 0;
   }
   else
   {
     
       return 1;
   }
   
   
}

int main()
{
  char Cvalue ='\0';
  BOOL bret = FALSE;
  
  printf("\n\t Enter A Character => ");
  scanf("%c",&Cvalue);
 
  bret = CheckSpecial(Cvalue);
  
  if(bret == TRUE)
  {
      printf("\n\t Character is Special Symbol!!");
  }
  else
  {
      printf("\n\t Character is not special symbol");
  }
  
  return 0;
}
