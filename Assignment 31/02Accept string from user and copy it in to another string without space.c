//Compiler version gcc  6.3.0
#include <stdio.h>

void StrCpyX(char *Src,char *Dest)
{
    while(*Src != '\0')
    { 
      if(*Src !=' ')
      {
          *Dest = *Src;
          *Dest++;
      }
       *Src++;
    }
    *Src--;
       
}

int main()
{
  char Arr[30] ="Marvellous Python";
  char Brr[30]="\0";
  
  StrCpyX(Arr,Brr);
  
  printf("\n\t %s",Brr);
  
  return 0;
}
