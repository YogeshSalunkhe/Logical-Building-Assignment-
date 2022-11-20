//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check_Capital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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
  
  bret = Check_Capital(Cvalue);
  
  if(bret == TRUE)
  {
      printf("\n\t Enter Character is Capital!!!");
  }
  else
  {
      printf("\n\t Enter character is not capital!!!");
  }
  
  return 0;
}
