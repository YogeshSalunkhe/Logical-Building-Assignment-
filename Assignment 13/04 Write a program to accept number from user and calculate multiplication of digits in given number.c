//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int Multdigits(int No)
{
  int Dig = 0,Mult = 1;
  

  while(No > 0)
  {
    Dig = No % 10;
  
   if(Dig != 0) 
   {
      Mult = Mult * Dig;
   }
    No /= 10;
  }
  return Mult;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
  iRet = Multdigits(iValue);
  
  printf("\n\t %d .",iRet);
  
  return 0;
}
