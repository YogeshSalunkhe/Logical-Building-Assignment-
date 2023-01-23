//Compiler version gcc  6.3.0
#include <stdio.h>

void StrCatX(char *Src,char *Dest)
{
    while(*Src != '\0')
    { 
       *Src++;
    }
    while(*Dest != '\0')
    {  
       *Src = *Dest;
       *Src++;
       *Dest++;
    }
    *Dest ='\0';
}

int main()
{
  char Arr[30] ="Marvellous Infosystem";
  char Brr[30]=" Logical Building";
  
  StrCatX(Arr,Brr);
  
  printf("\n\t %s",Arr);
  
  return 0;
}
