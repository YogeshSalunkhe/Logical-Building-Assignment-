//Compiler version gcc  6.3.0
#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL palindrome(char *Str)
{
    char *Ch = NULL;
     
     Ch = Str;
       
     while(*Ch != '\0')
     {
          if(*Ch >= 'A' && *Ch <= 'Z')
          {
              *Ch += 32;
          }
          *Ch++;
     }
      
     *Ch--;
     
     while(*Str != '\0')
     {
         if(*Ch != *Str)
         {
             break;
         }
         
         *Str++;
         *Ch--;
          
     }
      
      
     if(*Ch == *Str)
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
  char Arr[20];
  BOOL bRet = FALSE;
  
  printf("\n\t Enter String => ");
  scanf("%s",&Arr);
  
  bRet = palindrome(Arr);
  
  if(bRet == TRUE)
  {
       printf("\n\t string is palindrome!!!");
  }
  else
  {
       printf("\n\t String is not palindrome!!!");
  }
  return 0;
}
