//Compiler version gcc  6.3.0
#include <stdio.h>

void StrcpyCap(char *Src,char *Dest)
{
    while(*Src != '\0')
    {
      
      if(*Src >= 'A' && *Src <= 'Z')
      {
        *Dest = *Src;
        *Dest++;
      }
       
       *Src++;
    }
    Src--;
}

int main()
{
  char Arr[30] ="Marvellous Multi OS";
  char Brr[30]="\0";
  
  StrcpyCap(Arr,Brr);
  
  printf("\n\t %s",Brr);
  
  return 0;
}
