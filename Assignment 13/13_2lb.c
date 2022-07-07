//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int CntOdd(int No)
{
  int Dig = 0,Ocnt = 0;
  
  if(No < 0)
  {
    No = -No;
  }
  while(No > 0)
  {
    Dig = No % 10;
    
    if(Dig % 2 != 0)
    {
      Ocnt++;
    }
    No /= 10;
  }
  return Ocnt;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
  iRet = CntOdd(iValue);
  
  printf("\n\t Odd Digits in given number => %d",iRet);
  
  return 0;
}