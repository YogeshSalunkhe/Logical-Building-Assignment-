//Compiler version gcc  6.3.0
#include <stdio.h>

void StrcpyX(char *Src,char *Dest )
{
    while(*Src != '\0')
    {
        *Dest = *Src;
        *Src++;
        *Dest++;
    }
    Src--;
}

int main()
{
  char Arr[30] ="Marvellous Multi Os";
  char Brr[30]="\0";
  
  StrcpyX(Arr,Brr);
  
  printf(" %s.",Brr);
  
  return 0;
}
