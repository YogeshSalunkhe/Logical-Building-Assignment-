//Compiler version gcc  6.3.0
#include <stdio.h>

void StrCpyToggle(char *Src,char *Dest)
{
    while(*Src != '\0')
    { 
      if(*Src >='A' && *Src <= 'Z')
      {
          *Src = *Src + 32;
          
      }
      else if(*Src >='a' && *Src <= 'z')
      {
           *Src -= 32;
      }
       *Dest = *Src;
       *Src++;
       *Dest++;
    }
    *Src--;
       
}

int main()
{
  char Arr[30] ="Marvellous Python 2";
  char Brr[30]="\0";
  
  StrCpyToggle(Arr,Brr);
  
  printf("\n\t %s",Brr);
  
  return 0;
}