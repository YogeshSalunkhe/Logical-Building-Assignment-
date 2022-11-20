//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check_Alpha(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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
  
  bret = Check_Alpha(Cvalue);
  
  if(bret == FALSE)
  {
      printf("\n\t Enter Character is not alphabet !!!");
  }
  else
  {
      printf("\n\t Enter character is alphabet!!!");
  }
  
  return 0;
}
