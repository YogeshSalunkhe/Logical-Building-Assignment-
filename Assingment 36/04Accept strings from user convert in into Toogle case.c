//Compiler version gcc  6.3.0
#include <stdio.h>

void StrRevToggle(char *Src)
{
  char Temp ='\0';
  char *First,*Last;
  First = Src;
  Last = Src;
  
  while(*Last != '\0')
  {
       Last++;
  }
  Last--;
 
  while(First <= Last)
  {
       Temp = *First;
       if(Temp >= 'A' && Temp <= 'Z')
       {
             *First = Temp + 32;
       }
       else if(Temp >= 'a' && Temp <= 'z')
       {
             *First = Temp - 32;
       }
       First++;
  }
  
}

int main()
{
  char Arr[30] ="Marvellous";
  
  StrRevToggle(Arr);
  
  printf("%s",Arr);
  
  return 0;
}
