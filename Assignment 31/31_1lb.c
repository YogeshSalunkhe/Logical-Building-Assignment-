//Compiler version gcc  6.3.0
#include <stdio.h>

void StrCpyRev(char *Src,char *Dest)
{
    while(*Src != '\0')
    { 
       *Src++;
    }
    *Src--;
    while(*Src > 0)
    {  
       *Dest = *Src;
       *Src--;
       *Dest++;
    }
    
}

int main()
{
  char Arr[30] ="Marvellous Python";
  char Brr[30]="\0";
  
  StrCpyRev(Arr,Brr);
  
  printf("\n\t %s",Brr);
  
  return 0;
}