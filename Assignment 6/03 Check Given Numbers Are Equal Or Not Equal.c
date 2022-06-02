//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEqual(int No1,int No2)
{
  if(No1 == No2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int Ivalue1 = 0,Ivalue2 = 0;
  BOOL iRet = FALSE;
  
  printf("\n\t Enter 2 Numbers => ");
  scanf("%d%d",&Ivalue1,&Ivalue2);
  
   iRet = CheckEqual(Ivalue1,Ivalue2);
  
  if(iRet == TRUE)
  {
    printf("\n\t Equal. ");
  }
  else
  {
    printf("\n\t Not Equal.");
  }
  return 0;
}
