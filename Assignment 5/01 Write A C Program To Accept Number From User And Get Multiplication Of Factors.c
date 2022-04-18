//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,I =0,Ret=1;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  for(I = 1;I < No;I++)
  {
    if(No % I == 0)
    { 
      Ret *= I;
    }
  }
  printf("\n\t %d",Ret);
  
  getch();
  return 0;
}
