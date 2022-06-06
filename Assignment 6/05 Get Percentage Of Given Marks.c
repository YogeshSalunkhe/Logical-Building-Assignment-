//Compiler version gcc  6.3.0
#include <stdio.h>

float Percentage(int Tmarks,int Omarks)
{
  float per = 0.0;
  
  if(Omarks == 0)
  {
    return 0;
  }
  else
  {
    per = (Omarks * 100) / Tmarks;
    return per;
  }
 
}

int main()
{
  int iValue1,iValue2;
  float iRet = 0.0;
  
  printf("\n\t Enter Total Marks => ");
  scanf("%d",&iValue1);
  
  printf("\n\t Enter Obtained Marks => ");
  scanf("%d",&iValue2);
  
  iRet = Percentage(iValue1,iValue2);
  
  printf("\n\t Percentage => %0.1f",iRet);
  
  return 0;
}
