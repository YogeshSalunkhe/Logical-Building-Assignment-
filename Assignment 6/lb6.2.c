//Compiler version gcc  6.3.0
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chekGreater(int No)
{
  if(No > 100)
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
  int Ivalue = 0;
  BOOL iRet = FALSE;
  
  printf("\n\t Enter A Number => ");
  scanf("%d",&Ivalue);
  
   iRet = chekGreater(Ivalue);
  
  if(iRet == TRUE)
  {
    printf("\n\t Greater ");
  }
  else
  {
    printf("\n\t Smaller");
  }
  return 0;
}