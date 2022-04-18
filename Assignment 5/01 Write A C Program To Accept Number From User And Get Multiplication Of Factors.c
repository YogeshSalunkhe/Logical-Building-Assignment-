//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int Multfact(int N)
{
   int i=0,Ret=1;

    for(I = 1;I < No;I++)
  {
    if(No % I == 0)
    { 
      Ret *= I;
    }
  }
  return Ret;
}
int main()
{
  int No = 0,Ret=0;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&No);
  
  Ret=Multfact(No);

  printf("\n\t %d",Ret);
  
  getch();
  return 0;
}
