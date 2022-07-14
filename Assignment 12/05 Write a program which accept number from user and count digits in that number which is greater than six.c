//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int DigGreater(int No)
{
  int Dig = 0,cnt = 0;
  while(No > 0)
  {
    Dig = No % 10;
    
    if(Dig < 6)
    {
      cnt++;
    }
    No /= 10;
  }
  return cnt;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
  iRet = DigGreater(iValue);
  
  printf("\n\t %d",iRet);
  
  return 0;
}
