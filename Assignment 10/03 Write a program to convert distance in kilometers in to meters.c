//Compiler version gcc  6.3.0
#include <stdio.h>

int Kilometer(int Km)
{
  return Km * 1000;
}
int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter Distance => ");
  scanf("%d",&iValue);
  
  iRet = Kilometer(iValue);
  
  printf("\n\t Destination in meters = %d",iRet);
  
  return 0;
}
