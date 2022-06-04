//Compiler version gcc  6.3.0
#include <stdio.h>

int multiply(int N1,int N2,int N3)
{
  if(N1 == 0)
  {
    return N2 * N3;
  }
  else if(N2 == 0)
  {
    return N3 * N1;
  }
  else if(N3 == 0)
  {
    return N1 * N2;
  }
  else if(N1 == 0 && N2 == 0 && N3 == 0)
  {
    return 0;
  }
  else
  {
    return N1 * N2 * N3;
  }
}

int main()
{
  int No1,No2,No3,iRet;
  
  printf("\n\t Enter Three Numbers => ");
  scanf("%d%d%d",&No1,&No2,&No3);
  
  iRet = multiply(No1,No2,No3);
  
  printf("\n\t Multiplication Of Given Numbers => %d",iRet);
  
  return 0;
}