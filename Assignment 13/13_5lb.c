//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int CntDeff(int No)
{
  int Dig = 0,ESum = 0,OSum = 0;
  

  while(No > 0)
  {
    Dig = No % 10;
  
   if(Dig % 2 == 0) 
   {
      ESum = ESum + Dig;
   }
   else
   {
     OSum = OSum + Dig;
   }
    No /= 10;
  }
  return ESum - OSum;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
  iRet = CntDeff(iValue);
  
  printf("\n\t %d .",iRet);
  
  return 0;
}