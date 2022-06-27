//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int FactorialDeff(int No)
{
  int I = 1,i = 1;
  if(No < 0)
  {
    No = 0 - No;
  }
  while( No > 1)
  {
    if(No % 2 != 0)
    {
      I = I * No;
    }
    else
    {
      i = i * No;
    }
    
    No--;
  }
  return i - I;
}

int main()
{
  int iValue = 0, iRet = 0;
  
  printf("\n\t Enter A value => ");
  scanf("%d",&iValue);
  
  iRet = FactorialDeff(iValue);
  
  printf("\n\t Difference between even and odd Factorials => %d",iRet);
  
  return 0;
}