//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int DollerToINR(int Doller)
{
  return Doller * 70;
}

int main()
{
  int iValue = 0, iRet = 0;
  
  printf("\n\t Enter Number Of USD => ");
  scanf("%d",&iValue);
  
  iRet = DollerToINR(iValue);
  
  printf("\n\t Value in INR = %d",iRet);
  
  return 0;
}
