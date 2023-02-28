//Compiler version gcc  6.3.0
#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrCmp(char *Str1,char *Str2)
{
     
  for( ;*Str1 != '\0' && *Str2 != '\0';*Str1++,*Str2++)
  {
      if(*Str1 == *Str2 || *Str1 == *Str2+32 || *Str1 == *Str2-32 )
      {
          continue;
      }
      else 
      {
          break;
      }
  }
  
  if(*Str1 == *Str2) 
  {
      return TRUE;
  }
  else
  {
      return FALSE;
  }
    
}

int main()
{
  char csrc[20]="",src[20]="";
  BOOL bret = FALSE;
  
  printf("\n\t Enter String => ");
  gets(csrc);
  
  printf("\n\t Enter String => ");
  gets(src);
  
  bret = StrCmp(csrc,src);
  
  if(bret == TRUE)
  {
       printf("\n\t TRUE!!!");
  }
  else
  {
       printf("\n\t FALSE!!!");
  }
  
  return 0;
}