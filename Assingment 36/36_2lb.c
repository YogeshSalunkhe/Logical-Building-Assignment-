//Compiler version gcc  6.3.0
#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrCmpX(char *Src,char *Dest)
{
    while(*Src != '\0' && *Dest != '\0' )
    {
      
        if(*Src != *Dest)
        {
          break;
        }
        else
        {
            *Src++;
            *Dest++;
        }
        
    }
   
    if(*Src == '\0' || *Dest == '\0')
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
  BOOL bret = TRUE;
  char Arr[30]="Marvellous Infosystem";
  char Brr[30]="Marvellous Infosystem";
 
  
  bret = StrCmpX(Arr,Brr);
  
 if(bret == TRUE)
 {
      printf("\n\t Given string is Equal!!!");
 }
 else
 {
      printf("\n\t string are not equal....");
 }
  
  return 0;
}