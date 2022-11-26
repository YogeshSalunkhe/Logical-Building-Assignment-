//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check_Small(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
  char Cvalue ='\0';
  BOOL bret = FALSE;
  
  printf("\n\t Enter The Character => ");
  scanf("%c",&Cvalue);
  
  bret = Check_Small(Cvalue);
  
  if(bret == TRUE)
  {
      printf("\n\t Enter Character is Small case!!!");
  }
  else
  {
      printf("\n\t Enter character is not Small case!!!");
  }
  
  return 0;
}
