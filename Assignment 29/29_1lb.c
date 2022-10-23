//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *Str,char ch)
{
    
    
    while(*Str != '\0')
    {
        if(*Str == ch)
        {  
            break;
        }
        *Str++;
    }
    if(*Str != '\0')
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
  char Arr[20] ;
  char Cvalue = '\0';
  BOOL bret = FALSE;
  
  printf("\n\t Enter A string => ");
  scanf("%[^\n]",&Arr);
 
  printf("\n\t Enter A Character => ");
  scanf(" %c",&Cvalue);
 
  bret = ChkChar(Arr,Cvalue);
  
  if(bret == FALSE)
  {
      printf("\n\t False !!");
  }
  else
  {
      printf("\n\t True !..");
  }
  
  return 0;
}