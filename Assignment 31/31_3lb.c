//Compiler version gcc  6.3.0
#include <stdio.h>

void StrCpyCap(char *Src,char *Dest)
{
    while(*Src != '\0')
    { 
      if(*Src >='a' && *Src <= 'z')
      {
          *Src = *Src - 32;
          
      }
       *Dest = *Src;
       *Src++;
       *Dest++;
    }
    *Src--;
       
}

int main()
{
  char Arr[30] ="Marvellous Python 02";
  char Brr[30]="\0";
  
  StrCpyCap(Arr,Brr);
  
  printf("\n\t %s",Brr);
  
  return 0;
}