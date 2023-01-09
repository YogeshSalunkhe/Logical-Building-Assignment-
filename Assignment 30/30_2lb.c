//Compiler version gcc  6.3.0
#include <stdio.h>

void StrcpyX(char *Src,char *Dest,int Cnt)
{
    while(*Src != '\0' && Cnt != 0)
    {
        *Dest = *Src;
        *Src++;
        *Dest++;
        Cnt--;
    }
    Src--;
}

int main()
{
  char Arr[30] ="Marvellous Multi Os";
  char Brr[30]="\0";
  
  StrcpyX(Arr,Brr,20);
  
  printf("\n\t %s",Brr);
  
  return 0;
}