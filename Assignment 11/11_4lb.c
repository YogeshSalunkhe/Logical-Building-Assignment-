//Compiler version gcc  6.3.0
#include <stdio.h>
#include <conio.h>

int RangeSum(int Start,int End)
{
  int Ans;
  if(Start > End)
  {
    printf("\n\t Invalid Range");
  }
   while(Start <= End)
   {
     
    
     Ans = Ans + Start;
     
     Start++;
   }
   return Ans;
}

int main()
{
  int iValue1 = 0,iValue2 = 0,iRet = 0;
  
  printf("\n\t Enter Starting Point => ");
  scanf("%d",&iValue1);
  
  printf("\n\t Enter Ending Point => ");
  scanf("%d",&iValue2);
  
  iRet = RangeSum(iValue1,iValue2);
  
  printf("\n\t Addition = %d",iRet);
  
  return 0;
}