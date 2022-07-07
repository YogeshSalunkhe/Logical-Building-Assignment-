//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int CntEven(int No)
{
  int Dig = 0,Ecnt = 0;
  
  if(No < 0)
  {
    No = -No;
  }
  while(No > 0)
  {
    Dig = No % 10;
    
    if(Dig % 2 == 0)
    {
      Ecnt++;
    }
    No /= 10;
  }
  return Ecnt;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
  iRet = CntEven(iValue);
  
  printf("\n\t Even Digits in given number => %d",iRet);
  
  return 0;
}