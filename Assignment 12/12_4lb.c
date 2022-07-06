//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int CntFour(int No)
{
  int Dig = 0,Tcnt = 0;
  while(No > 0)
  {
    Dig = No % 10;
    
    if(Dig == 4)
    {
      Tcnt++;
    }
    No /= 10;
  }
  return Tcnt;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
  iRet = CntFour(iValue);
  
  printf("\n\t %d",iRet);
  
  return 0;
}