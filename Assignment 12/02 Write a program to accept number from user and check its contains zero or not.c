//Compiler version gcc  6.3.0
#include <stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL Chkzero(int No)
{
  int Dig = 0;
  
  if(No < 0)
  {
    No = -No;
  }
  while(No > 0)
  {
    Dig = No % 10;
    
    if(Dig == 0)
    {
      return True;
     
    }
    else
    {
       No /= 10;
    }  
    
  }
}

int main()
{
  int iValue = 0;
  BOOL dRet = False;
  
  printf("\n\t Enter Number => ");
  scanf("%d",&iValue);
  
 dRet = Chkzero(iValue);
  
  if(dRet == True)
  {
     printf("\n\t It contains zero");
  }
  else
  {
     printf("\n\t There is no Zero");
  }
  return 0;
}
