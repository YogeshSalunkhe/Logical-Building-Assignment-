//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int EvenFactorial(int No)
{
  int I = 1;
  if(No < 0)
  {
    No = 0 - No;
  }
  while( No > 1)
  {
    if(No % 2 == 0)
    {
      I = I * No;
    }
    
    No--;
  }
  return I;
}

int main()
{
  int iValue = 0, iRet = 0;
  
  printf("\n\t Enter A value => ");
  scanf("%d",&iValue);
  
  iRet = EvenFactorial(iValue);
  
  printf("\n\t Even Factorials of given number = %d",iRet);
  
  return 0;
}
