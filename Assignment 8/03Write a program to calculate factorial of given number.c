//Compiler version gcc  6.3.0
#include <stdio.h>

int Factorial(int No)
{
  int Fact;
  
  if(No < 0)
  {
    No = No - No;
  }
  
  for(Fact = 1;No > 1;No--)
  {
    Fact = Fact * No;
  }
  
  return Fact;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter A Value => ");
  scanf("%d",&iValue);
  
  iRet = Factorial(iValue);
 
  printf("\n\t Factorial of %d = %d",iValue, iRet);
  
  return 0;
}
